using UnrealBuildTool;

public class BlamAnimSync : ModuleRules {
    public BlamAnimSync(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "BlamSynchronization",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
