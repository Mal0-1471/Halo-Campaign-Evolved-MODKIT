#include "TCQualitySubsystem.h"

UTCQualitySubsystem::UTCQualitySubsystem() {
}

void UTCQualitySubsystem::RequestQualityChange(const TArray<FQualityConstraint>& GameConstraints) {
}

TArray<FQualityPreset> UTCQualitySubsystem::GetQualityPresets() {
    return TArray<FQualityPreset>();
}

TArray<FQualityDefinitionFile> UTCQualitySubsystem::GetQualityFilesForPlatform(const FString& PlatformName) {
    return TArray<FQualityDefinitionFile>();
}

TArray<FQualityDefinitionFile> UTCQualitySubsystem::GetQualityFiles(bool bGetForAllPlatforms) {
    return TArray<FQualityDefinitionFile>();
}

FString UTCQualitySubsystem::GetCurrentQualityGroupName() {
    return TEXT("");
}

TArray<FQualityConstraintKey> UTCQualitySubsystem::GetAllowedConstraints() {
    return TArray<FQualityConstraintKey>();
}

void UTCQualitySubsystem::ApplyQualityPreset(const FString& QualityPresetName) {
}

void UTCQualitySubsystem::ApplyQualityGroup(const FString& GroupName) {
}

void UTCQualitySubsystem::ApplyPCDefaultQualityGroup() {
}


