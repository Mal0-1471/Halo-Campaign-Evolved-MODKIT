import os
import sys
import unreal

def mount_dependencies():
    """Guarantees the plugin's third-party libraries are mounted to sys.path dynamically."""
    plugin_python_dir = os.path.dirname(os.path.abspath(__file__)).replace('\\', '/')
    site_packages_path = f"{plugin_python_dir}/Win64/Lib/site-packages"
    
    if site_packages_path not in sys.path:
        sys.path.insert(0, site_packages_path)
        unreal.log(f"CookedVTImporter: Dynamically mounted plugin dependencies -> {site_packages_path}")

# Run immediately when the script file is read by any track context
mount_dependencies()

import json
import tkinter as tk
from tkinter import filedialog
from PIL import Image

def browse_json():
    mount_dependencies()
    root = tk.Tk(); root.withdraw(); root.attributes('-topmost', True)
    file_path = filedialog.askopenfilename(title="Select FModel JSON Export", filetypes=[("JSON files", "*.json")])
    root.destroy()
    return file_path.replace('\\', '/') if file_path else ""

def browse_png():
    mount_dependencies()
    root = tk.Tk(); root.withdraw(); root.attributes('-topmost', True)
    file_path = filedialog.askopenfilename(title="Select Virtual Texture PNG Atlas", filetypes=[("PNG images", "*.png")])
    root.destroy()
    return file_path.replace('\\', '/') if file_path else ""

def browse_folder():
    """Opens a native directory browser window for bulk importing."""
    mount_dependencies()
    root = tk.Tk(); root.withdraw(); root.attributes('-topmost', True)
    folder_path = filedialog.askdirectory(title="Select Folder for Bulk VT Import")
    root.destroy()
    return folder_path.replace('\\', '/') if folder_path else ""

def process_single_asset(json_path, png_path, stack_direction, should_skip_existing=True):
    """Encapsulates the core slicing and engine importing logic for reuse."""
    if not os.path.exists(json_path) or not os.path.exists(png_path):
        unreal.log_warning(f"CookedVTImporter: Skipping missing pair element. JSON: {json_path}")
        return False

    with open(json_path, 'r') as f:
        vt_data = json.load(f)

    if isinstance(vt_data, list) and len(vt_data) > 0:
        main_record = vt_data[0]
    elif isinstance(vt_data, dict):
        main_record = vt_data
    else:
        return False

    # Extract target directories early from FModel data
    package_path = main_record.get("Package", "")
    destination_folder = os.path.dirname(package_path).replace('\\', '/') if package_path else "/Game/Textures/FModelImports"
    base_name = os.path.splitext(os.path.basename(png_path))[0]
    final_asset_path = f"{destination_folder}/{base_name}"

    # Check state toggle validation
    if unreal.EditorAssetLibrary.does_asset_exist(final_asset_path):
        if should_skip_existing:
            unreal.log(f"CookedVTImporter: Skipping existing asset -> {base_name}")
            return True
        else:
            unreal.log(f"CookedVTImporter: Force-Overwrite requested. Purging old asset container: {final_asset_path}")
            unreal.EditorAssetLibrary.delete_asset(final_asset_path)

    inner_vt_properties = main_record.get("VTData", {})
    if not inner_vt_properties:
        inner_vt_properties = main_record.get("Properties", {}).get("VTData", {})

    if not inner_vt_properties:
        unreal.log_warning(f"CookedVTImporter: Skipping asset. No VTData found in: {json_path}")
        return False

    width_in_blocks = inner_vt_properties.get("WidthInBlocks", 1)
    height_in_blocks = inner_vt_properties.get("HeightInBlocks", 1)
    total_blocks = width_in_blocks * height_in_blocks

    img = Image.open(png_path)
    img_w, img_h = img.size
    tile_w = img_w // width_in_blocks
    tile_h = img_h // height_in_blocks
    output_dir = os.path.dirname(png_path).replace('\\', '/')

    # Image Slicing Logic
    if total_blocks > 1:
        for y in range(height_in_blocks):
            corrected_ue_y = (height_in_blocks - 1) - y if stack_direction == "Top to Bottom" else y
            for x in range(width_in_blocks):
                udim_index = 1001 + (corrected_ue_y * 10) + x
                left, top = x * tile_w, y * tile_h
                tile_img = img.crop((left, top, left + tile_w, top + tile_h))
                tile_filename = f"{base_name}.{udim_index}.png"
                tile_img.save(os.path.join(output_dir, tile_filename))
        target_import_file = os.path.join(output_dir, f"{base_name}.1001.png").replace('\\', '/')
    else:
        target_import_file = png_path

    # Core Import Task Configuration
    asset_tools = unreal.AssetToolsHelpers.get_asset_tools()
    import_task = unreal.AssetImportTask()
    import_task.filename = target_import_file
    import_task.destination_path = destination_folder
    import_task.destination_name = base_name
    import_task.automated = True
    import_task.replace_existing = True
    import_task.save = True

    asset_tools.import_asset_tasks([import_task])

    # ----------------------------------------------------
    # AUTOMATED TEXTURE PROPERTY INJECTION (FULL TRANSLATION ENGINE)
    # ----------------------------------------------------
    imported_texture = unreal.EditorAssetLibrary.load_asset(final_asset_path)
    if imported_texture:
        json_props = main_record.get("Properties", {})
        
        # ====================================================
        # 1. COMPREHENSIVE COMPRESSION SETTINGS DICTIONARY (UE CONFORMED)
        # ====================================================
        compression_map = {
            "TC_Default": unreal.TextureCompressionSettings.TC_DEFAULT,
            "TC_Normalmap": unreal.TextureCompressionSettings.TC_NORMALMAP,
            "TC_Masks": unreal.TextureCompressionSettings.TC_MASKS,
            "TC_Grayscale": unreal.TextureCompressionSettings.TC_GRAYSCALE,
            "TC_Displacementmap": unreal.TextureCompressionSettings.TC_DISPLACEMENTMAP,
            "TC_VectorDisplacementmap": unreal.TextureCompressionSettings.TC_VECTOR_DISPLACEMENTMAP,
            "TC_HDR_Compressed": unreal.TextureCompressionSettings.TC_HDR_COMPRESSED,
            "TC_HDR": unreal.TextureCompressionSettings.TC_HDR,
            "TC_EditorIcon": unreal.TextureCompressionSettings.TC_EDITOR_ICON,
            "TC_Alpha": unreal.TextureCompressionSettings.TC_ALPHA,
            "TC_DistanceFieldFont": unreal.TextureCompressionSettings.TC_DISTANCE_FIELD_FONT,
            "TC_BC7": unreal.TextureCompressionSettings.TC_BC7
        }

        # Parse and execute compression setting assignment with an Exception Guard Block
        compression_str = json_props.get("CompressionSettings", "")
        for key, enum_val in compression_map.items():
            if key in compression_str:
                try:
                    # Attempt native engine assignment
                    imported_texture.set_editor_property("compression_settings", enum_val)
                except Exception as compression_error:
                    # Catch and log any hidden API discrepancies safely without stalling the loop
                    unreal.log_warning(f"CookedVTImporter: Compression profile '{key}' rejected by Engine API: {compression_error}")
                break

        # ====================================================
        # 2. MASTER sRGB SELECTION RULE
        # ====================================================
        # First preference: Read a true explicit Boolean True/False straight from the JSON file
        if "SRGB" in json_props:
            json_srgb_value = json_props.get("SRGB")
            imported_texture.set_editor_property("srgb", json_srgb_value)
        else:
            # Fallback safe assignment loop if the JSON doesn't provide the flag
            if any(k in compression_str for k in ["TC_Normalmap", "TC_Masks", "TC_Grayscale", "TC_Displacementmap"]):
                imported_texture.set_editor_property("srgb", False)
            else:
                imported_texture.set_editor_property("srgb", True)

        # ====================================================
        # 3. COMPREHENSIVE TEXTURE GROUP (LODGROUP) DICTIONARY (UE CONFORMED)
        # ====================================================
        lod_group_map = {
            # World Maps & Details
            "TEXTUREGROUP_WorldSpecular": unreal.TextureGroup.TEXTUREGROUP_WORLD_SPECULAR,
            "TEXTUREGROUP_World": unreal.TextureGroup.TEXTUREGROUP_WORLD,
            "TEXTUREGROUP_Terrain_Heightmap": unreal.TextureGroup.TEXTUREGROUP_TERRAIN_HEIGHTMAP,
            "TEXTUREGROUP_Terrain_Weightmap": unreal.TextureGroup.TEXTUREGROUP_TERRAIN_WEIGHTMAP,
            
            # Characters & Equipment Assets
            "TEXTUREGROUP_CharacterSpecular": unreal.TextureGroup.TEXTUREGROUP_CHARACTER_SPECULAR,
            "TEXTUREGROUP_Character": unreal.TextureGroup.TEXTUREGROUP_CHARACTER,
            "TEXTUREGROUP_WeaponSpecular": unreal.TextureGroup.TEXTUREGROUP_WEAPON_SPECULAR,
            "TEXTUREGROUP_Weapon": unreal.TextureGroup.TEXTUREGROUP_WEAPON,
            "TEXTUREGROUP_VehicleSpecular": unreal.TextureGroup.TEXTUREGROUP_VEHICLE_SPECULAR,
            "TEXTUREGROUP_Vehicle": unreal.TextureGroup.TEXTUREGROUP_VEHICLE,
            
            # Interface UI & VFX Systems
            "TEXTUREGROUP_UI": unreal.TextureGroup.TEXTUREGROUP_UI,
            "TEXTUREGROUP_EffectsNotFiltered": unreal.TextureGroup.TEXTUREGROUP_EFFECTS_NOT_FILTERED,
            "TEXTUREGROUP_Effects": unreal.TextureGroup.TEXTUREGROUP_EFFECTS,
            "TEXTUREGROUP_Cinematic": unreal.TextureGroup.TEXTUREGROUP_CINEMATIC,
            "TEXTUREGROUP_Skybox": unreal.TextureGroup.TEXTUREGROUP_SKYBOX,
            "TEXTUREGROUP_Lightmap": unreal.TextureGroup.TEXTUREGROUP_LIGHTMAP,
            "TEXTUREGROUP_Shadowmap": unreal.TextureGroup.TEXTUREGROUP_SHADOWMAP,
            "TEXTUREGROUP_RenderTarget": unreal.TextureGroup.TEXTUREGROUP_RENDER_TARGET,
            "TEXTUREGROUP_ColorLookupTable": unreal.TextureGroup.TEXTUREGROUP_COLOR_LOOKUP_TABLE,
            
            # Custom Project Slots (Dynamically maps Project01-15 profiles natively)
            "TEXTUREGROUP_Project01": unreal.TextureGroup.TEXTUREGROUP_PROJECT01,
            "TEXTUREGROUP_Project02": unreal.TextureGroup.TEXTUREGROUP_PROJECT02,
            "TEXTUREGROUP_Project03": unreal.TextureGroup.TEXTUREGROUP_PROJECT03,
            "TEXTUREGROUP_Project04": unreal.TextureGroup.TEXTUREGROUP_PROJECT04,
            "TEXTUREGROUP_Project05": unreal.TextureGroup.TEXTUREGROUP_PROJECT05,
            "TEXTUREGROUP_Project06": unreal.TextureGroup.TEXTUREGROUP_PROJECT06,
            "TEXTUREGROUP_Project07": unreal.TextureGroup.TEXTUREGROUP_PROJECT07,
            "TEXTUREGROUP_Project08": unreal.TextureGroup.TEXTUREGROUP_PROJECT08,
            "TEXTUREGROUP_Project09": unreal.TextureGroup.TEXTUREGROUP_PROJECT09,
            "TEXTUREGROUP_Project10": unreal.TextureGroup.TEXTUREGROUP_PROJECT10,
            "TEXTUREGROUP_Project11": unreal.TextureGroup.TEXTUREGROUP_PROJECT11,
            "TEXTUREGROUP_Project12": unreal.TextureGroup.TEXTUREGROUP_PROJECT12,
            "TEXTUREGROUP_Project13": unreal.TextureGroup.TEXTUREGROUP_PROJECT13,
            "TEXTUREGROUP_Project14": unreal.TextureGroup.TEXTUREGROUP_PROJECT14,
            "TEXTUREGROUP_Project15": unreal.TextureGroup.TEXTUREGROUP_PROJECT15
        }

        # Parse and execute LODGroup assignment with a production-grade Exception Guard Block
        lod_group_str = json_props.get("LODGroup", "")
        for group_key, group_enum in lod_group_map.items():
            if group_key in lod_group_str:
                try:
                    # Attempt native engine assignment
                    imported_texture.set_editor_property("lod_group", group_enum)
                except Exception as property_error:
                    # Catch and log any hidden API unexposed attribute glitches safely without stalling the loop
                    unreal.log_warning(f"CookedVTImporter: Target group '{group_key}' rejected by Engine API: {property_error}")
                break
                
        # ====================================================
        # 4. STREAMING VIRTUAL TEXTURE EVALUATION
        # ====================================================
        if total_blocks > 1:
            imported_texture.set_editor_property("virtual_texture_streaming", True)
        else:
            vt_streaming_flag = json_props.get("VirtualTextureStreaming", False)
            imported_texture.set_editor_property("virtual_texture_streaming", vt_streaming_flag)

        # Final asset compilation save back to content registry
        unreal.EditorAssetLibrary.save_asset(imported_texture.get_path_name())
        
    return True

def run_import(node_variables=None):
    """Main execution entry point switching seamlessly between single and bulk imports."""
    if not node_variables:
        unreal.log_error("CookedVTImporter Error: Missing node variable context.")
        return

    bulk_folder = node_variables.get("folder_path", "").strip()
    stack_direction = node_variables.get("stack_direction", "")
    ui_skip_setting = node_variables.get("skip_existing", True)

    # ====================================================
    # DOMINANT KEY BULK PROCESS MODE (DEEP NESTED SUB-FOLDERS)
    # ====================================================
    if bulk_folder and os.path.exists(bulk_folder):
        unreal.log(f"CookedVTImporter: Initializing Recursive Bulk Process for folder -> {bulk_folder}")
        
        # 1. DEEP CRAWL LOGIC: Walk through all nested child sub-folders
        json_filenames = []
        file_map = {}
        
        for root, dirs, files in os.walk(bulk_folder):
            for file in files:
                file_lower = file.lower()
                full_path = os.path.join(root, file).replace('\\', '/')
                
                # Index files by their lowercase filename for quick, case-insensitive pairing
                file_map[file_lower] = full_path
                
                if file_lower.endswith('.json'):
                    json_filenames.append(full_path)
        
        success_count = 0
        skipped_count = 0
        
        # 2. MATCH AND ITERATE OVER THE PRIMARY KEYS
        for json_path in json_filenames:
            # Extract the raw file name from its absolute directory path
            json_file = os.path.basename(json_path)
            base_name, _ = os.path.splitext(json_file)
            
            # Look for the texture sheet buddy inside our lowercase map dictionary
            target_png_lower = f"{base_name.lower()}.png"
            png_path = file_map.get(target_png_lower)
            
            if png_path:
                # Step 3: Run the core importer math (Slices automatically drop right next to 'png_path'!)
                if process_single_asset(json_path, png_path, stack_direction, should_skip_existing=ui_skip_setting):
                    success_count += 1
            else:
                unreal.log_warning(f"CookedVTImporter: Found JSON primary key '{json_file}', but no matching PNG sheet was found in your directory maps. Skipping.")
                skipped_count += 1
                    
        unreal.log(f"CookedVTImporter: Deep bulk operation finalized. Synchronized {success_count} assets. (Skipped {skipped_count} unmatched keys)")
    
    # SINGLE PROCESS MODE (Fallback Track)
    else:
        json_path = node_variables.get("json_path", "")
        png_path = node_variables.get("png_path", "")
        if process_single_asset(json_path, png_path, stack_direction, should_skip_existing=ui_skip_setting):
            unreal.log("CookedVTImporter: Single file import completed successfully.")
