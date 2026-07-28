#include "TCQualityLibrary.h"

UTCQualityLibrary::UTCQualityLibrary() {
}

void UTCQualityLibrary::WriteUserQualitySetting(const FString& Category, const FString& Key, const FString& Value) {
}

FString UTCQualityLibrary::ReadUserQualitySetting(const FString& Category, const FString& Key) {
    return TEXT("");
}

TEnumAsByte<ESplitScreenType::Type> UTCQualityLibrary::GetSplitScreenType() {
    return ESplitScreenType::None;
}

TArray<FString> UTCQualityLibrary::GetQualityPresets() {
    return TArray<FString>();
}

TArray<FQualityConstraint> UTCQualityLibrary::GetConstraintsForQualityPreset(const FString& Key) {
    return TArray<FQualityConstraint>();
}

TArray<FString> UTCQualityLibrary::GetAllowedValuesForConstraint(const FString& Key) {
    return TArray<FString>();
}

TArray<FString> UTCQualityLibrary::GetAllowedConstraints() {
    return TArray<FString>();
}


