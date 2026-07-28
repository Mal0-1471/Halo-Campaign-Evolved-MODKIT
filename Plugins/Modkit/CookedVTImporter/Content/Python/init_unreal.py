import unreal

@unreal.uclass()
class CookedVTMenuExtension(unreal.ToolMenuEntryScript):
    """A tiny script class to register and handle our top menu button click action."""
    
    @unreal.ufunction(override=True)
    def execute(self, context):
        # Locate the editor subsystem that handles utility widgets
        widget_subsystem = unreal.get_editor_subsystem(unreal.EditorUtilitySubsystem)
        
        # Point directly to your widget's new internal plugin package path
        widget_path = "/CookedVTImporter/EditorUtilityWidget/EUW_CookedVTImporter.EUW_CookedVTImporter"
        
        # Load the widget asset into memory natively
        widget_blueprint = unreal.EditorAssetLibrary.load_asset(widget_path)
        
        if widget_blueprint:
            # Spawn and launch the widget window panel onto the screen!
            widget_subsystem.spawn_and_register_tab(widget_blueprint)
        else:
            unreal.log_error(f"CookedVTImporter Menu: Failed to find widget at path: {widget_path}")

def register_menu_button():
    """Injects a custom clickable item directly into Unreal Engine's top Tools menu."""
    menus = unreal.ToolMenus.get()
    
    # Target the standard "Tools" drop-down menu at the very top of the editor screen
    target_menu = menus.find_menu("MainFrame.MainMenu.Tools")
    if not target_menu:
        return

    # Instantiating our clickable action script
    menu_entry_script = CookedVTMenuExtension()
    menu_entry_script.init_entry(
        owner_name="CookedVTImporter",
        menu="MainFrame.MainMenu.Tools",
        section="Tools",
        name="CookedVTImporterLauncher",
        label="Cooked VT Importer",
        tool_tip="Launches the automated Cooked Virtual Texture import interface panel."
    )
    
    # Inject the button right into the menu layout
    target_menu.add_menu_entry_object(menu_entry_script)
    menus.refresh_all_widgets()

# Automatically execute the registration function when Unreal finishes loading
if __name__ == "__main__":
    register_menu_button()