using UnrealBuildTool;

public class HaloOnlineUtils : ModuleRules {
    public HaloOnlineUtils(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "ModularGameplay",
            "OnlineSubsystemUtils",
        });
    }
}
