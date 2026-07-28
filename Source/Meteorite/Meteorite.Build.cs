using UnrealBuildTool;

public class Meteorite : ModuleRules {
    public Meteorite(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "BlamEngine",
            "BlamGlue",
            "BlamSynchronization",
            "CommonUI",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "EnhancedInput",
            "GameplayTags",
            "HaloUI",
            //"MeteoriteOnlineServices",
            "NavigationSystem",
            "SlateCore",
            "UMG",
        });
    }
}