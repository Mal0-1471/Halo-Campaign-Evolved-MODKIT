using UnrealBuildTool;

public class BlamSynchronization : ModuleRules {
    public BlamSynchronization(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "BlamAudio",
            "BlamGlue",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "LevelSequence",
            "ModularGameplay",
        });
    }
}
