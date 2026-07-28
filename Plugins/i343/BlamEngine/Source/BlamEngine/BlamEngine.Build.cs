using UnrealBuildTool;

public class BlamEngine : ModuleRules {
    public BlamEngine(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "BlamExperience",
            "BlamGlue",
            "BlamNetworkSession",
            "BlamSynchronization",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "EnhancedInput",
            "GameplayTags",
            "HaloAssetManager",
            "HaloAudioUnreal",
            "HaloModularGameplayActors",
            "HaloOnlineUtils",
            "HaloUI",
            "HaloUserSettings",
            "InputCore",
            "LevelSequence",
            "ModularGameplay",
            "PhysicsCore",
            "SlateCore",
            "UMG"
        });
    }
}
