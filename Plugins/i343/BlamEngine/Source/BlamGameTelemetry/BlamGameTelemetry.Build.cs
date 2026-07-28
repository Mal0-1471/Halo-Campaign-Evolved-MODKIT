using UnrealBuildTool;

public class BlamGameTelemetry : ModuleRules {
    public BlamGameTelemetry(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "HaloGameTelemetry",
            "JsonUtilities",
        });
    }
}
