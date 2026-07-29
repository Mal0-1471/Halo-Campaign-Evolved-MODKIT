import os
import sys
import unreal

# --- PLUGIN DEPENDENCY PATH INJECTION ---
# Automatically resolve the dynamic absolute path to this plugin's platform directory
plugin_python_dir = os.path.dirname(os.path.abspath(__file__)).replace('\\', '/')
site_packages_path = f"{plugin_python_dir}/Win64/Lib/site-packages"

# Inject the platform-specific library directory into Python's search paths if it isn't there already
if site_packages_path not in sys.path:
    sys.path.insert(0, site_packages_path)
    unreal.log(f"CookedVTImporter: Successfully mounted plugin dependencies -> {site_packages_path}")
# ----------------------------------------

import os
import json
import sys
import tkinter as tk
from tkinter import filedialog
from PIL import Image
import unreal

def browse_json():
    """Explicitly opens file explorer filtering for JSON assets."""
    root = tk.Tk()
    root.withdraw()
    root.attributes('-topmost', True)
    
    file_path = filedialog.askopenfilename(title="Select FModel JSON Export", filetypes=[("JSON files", "*.json")])
    root.destroy()
    return file_path.replace('\\', '/') if file_path else ""

def browse_png():
    """Explicitly opens file explorer filtering for PNG assets."""
    root = tk.Tk()
    root.withdraw()
    root.attributes('-topmost', True)
    
    file_path = filedialog.askopenfilename(title="Select Virtual Texture PNG Atlas", filetypes=[("PNG images", "*.png")])
    root.destroy()
    return file_path.replace('\\', '/') if file_path else ""

def run_import(node_variables=None):
    """Slices the texture according to the chosen stack direction and imports as a VT."""
    
    # 1. NEW LOGIC ROUTE: Read data directly from the Blueprint visual pins!
    if node_variables:
        json_path = node_variables.get("json_path", "").replace('\\', '/')
        png_path = node_variables.get("png_path", "").replace('\\', '/')
        stack_direction = node_variables.get("stack_direction", "")
    else:
        # Fallback for standard script parsing
        if len(sys.argv) < 4:
            unreal.log_error("CookedVTImporter Error: Missing arguments from Blueprint widget.")
            return
        json_path = sys.argv[1].replace('\\', '/')
        png_path = sys.argv[2].replace('\\', '/')
        stack_direction = sys.argv[3]

    # Safety validation
    if not json_path or not png_path or not stack_direction:
        unreal.log_error("CookedVTImporter Error: Missing file paths or stack direction configurations.")
        return

    if not os.path.exists(json_path) or not os.path.exists(png_path):
        unreal.log_error(f"CookedVTImporter Error: Provided paths do not exist. \nJSON: {json_path}\nPNG: {png_path}")
        return

    # ----------------------------------------------------
    # (Keep your existing image slicing loops & asset import tasks down below exactly the same!)
    # ----------------------------------------------------
    output_dir = os.path.join(os.path.dirname(png_path), "ProcessedTiles/").replace('\\', '/')
    if not os.path.exists(output_dir):
        os.makedirs(output_dir)

    with open(json_path, 'r') as f:
        vt_data = json.load(f)

    # Clean array unpacking tracking
    if isinstance(vt_data, list) and len(vt_data) > 0:
        main_record = vt_data[0]
    elif isinstance(vt_data, dict):
        main_record = vt_data
    else:
        unreal.log_error("CookedVTImporter Error: Invalid or corrupt JSON structure.")
        return

    # CRUCIAL NAVIGATION FIX: Navigate deep into the 'VTData' dictionary wrapper block!
    inner_vt_properties = main_record.get("VTData", {})
    if not inner_vt_properties:
        # Secondary fallback validation check just in case FModel structures it under "Properties"
        inner_vt_properties = main_record.get("Properties", {}).get("VTData", {})

    if not inner_vt_properties:
        unreal.log_error("CookedVTImporter Error: Could not find 'VTData' block inside the FModel JSON metadata.")
        return

    # Read dimensions safely from the verified nested object block
    width_in_blocks = inner_vt_properties.get("WidthInBlocks", 1)
    height_in_blocks = inner_vt_properties.get("HeightInBlocks", 1)

    img = Image.open(png_path)
    img_w, img_h = img.size
    tile_w = img_w // width_in_blocks
    tile_h = img_h // height_in_blocks
    base_name = os.path.splitext(os.path.basename(png_path))[0]

    unreal.log(f"Slicing {base_name} ({width_in_blocks}x{height_in_blocks}) using rule: {stack_direction}")

    for y in range(height_in_blocks):
        if stack_direction == "Top to Bottom":
            corrected_ue_y = (height_in_blocks - 1) - y
        else:
            corrected_ue_y = y
        
        for x in range(width_in_blocks):
            udim_index = 1001 + (corrected_ue_y * 10) + x
            left = x * tile_w
            top = y * tile_h
            right = left + tile_w
            bottom = top + tile_h
            
            tile_img = img.crop((left, top, right, bottom))
            tile_filename = f"{base_name}.{udim_index}.png"
            tile_img.save(os.path.join(output_dir, tile_filename))

    # ----------------------------------------------------
    # DYNAMIC INTERCHANGE DIMENSION PIPELINE
    # ----------------------------------------------------
    # Calculate total tiles sliced
    total_blocks = width_in_blocks * height_in_blocks
    
    # 1. EVALUATE LOGIC: Choose the exact file path Unreal needs based on grid layout
    if total_blocks > 1:
        # Multi-tile UDIM grid detected. Target the sequence root to build the VT container!
        target_import_file = os.path.join(output_dir, f"{base_name}.1001.png").replace('\\', '/')
        unreal.log(f"CookedVTImporter: Processing true multi-tile Virtual Texture sequence ({width_in_blocks}x{height_in_blocks}).")
    else:
        # 1x1 block detected. Duplicate the raw source PNG as the standalone asset to bypass Interchange errors!
        target_import_file = png_path
        unreal.log("CookedVTImporter: Single 1x1 tile detected. Importing as standard flat texture asset.")

    # 2. READ TARGET PATH NATIVELY FROM THE FMODEL JSON
    package_path = main_record.get("Package", "")
    if package_path:
        package_path = package_path.replace('\\', '/')
        destination_folder = os.path.dirname(package_path)
    else:
        destination_folder = "/Game/Textures/FModelImports"

    unreal.log(f"CookedVTImporter: Routing asset generation down to: {destination_folder}")

    # 3. EXECUTE UNREAL IMPORT CORE
    asset_tools = unreal.AssetToolsHelpers.get_asset_tools()
    import_task = unreal.AssetImportTask()
    import_task.filename = target_import_file
    import_task.destination_path = destination_folder
    import_task.destination_name = base_name
    import_task.automated = True
    import_task.save = True
    import_task.replace_existing = True 
    import_task.save = True

    asset_tools.import_asset_tasks([import_task])

    # 4. CONDITIONAL POST-PROCESSING FLAGS
    final_asset_path = f"{destination_folder}/{base_name}"
    imported_texture = unreal.EditorAssetLibrary.load_asset(final_asset_path)
    
    if imported_texture:
        # Only force the Virtual Texture Streaming flag if it is a true multi-tile arrangement
        if total_blocks > 1:
            imported_texture.set_editor_property("virtual_texture_streaming", True)
            unreal.EditorAssetLibrary.save_asset(imported_texture.get_path_name())
            unreal.log(f"Successfully generated Streaming Virtual Texture: {final_asset_path}")
        else:
            unreal.log(f"Successfully generated Flat Texture: {final_asset_path}")

