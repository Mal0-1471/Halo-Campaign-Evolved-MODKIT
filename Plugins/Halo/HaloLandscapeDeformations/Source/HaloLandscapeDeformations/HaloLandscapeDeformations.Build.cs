using UnrealBuildTool;

public class HaloLandscapeDeformations : ModuleRules {
    public HaloLandscapeDeformations(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "PhysicsCore",
        });
    }
}
