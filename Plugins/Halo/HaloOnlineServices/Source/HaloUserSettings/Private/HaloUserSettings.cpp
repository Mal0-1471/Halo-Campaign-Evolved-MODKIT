#include "HaloUserSettings.h"

UHaloUserSettings::UHaloUserSettings() {
    this->HaloUserSettingsVersion = 1;
    this->HaloUserSettingsSubVersion = 1;
    this->bIsFirstTimeUser = false;
    this->bIsFirstTimeUserDevice = true;
}

void UHaloUserSettings::SetStringValueFromTag(FGameplayTag SettingTag, const FString& NewValue) {
}

void UHaloUserSettings::SetStringValueFromName(const FName& PropertyName, const FString& NewValue) {
}

void UHaloUserSettings::SetLocalUserIndex(int32 InLocalUserIndex) {
}

void UHaloUserSettings::SetIntValueFromTag(FGameplayTag SettingTag, int32 NewValue) {
}

void UHaloUserSettings::SetIntValueFromName(const FName& PropertyName, int32 NewValue) {
}

void UHaloUserSettings::SetFloatValueFromTag(FGameplayTag SettingTag, float NewValue) {
}

void UHaloUserSettings::SetFloatValueFromName(const FName& PropertyName, float NewValue) {
}

void UHaloUserSettings::SetDoubleValueFromTag(FGameplayTag SettingTag, double NewValue) {
}

void UHaloUserSettings::SetDoubleValueFromName(const FName& PropertyName, double NewValue) {
}

void UHaloUserSettings::SetCategoryToDefaults(FGameplayTag SettingCategory) {
}

void UHaloUserSettings::SaveHaloUserSettings(UHaloUserSettings::FOnSettingsOperationCompleted OnCompleted) {
}

void UHaloUserSettings::LoadHaloUserSettings(UHaloUserSettings::FOnSettingsOperationCompleted OnCompleted) {
}

FString UHaloUserSettings::GetStringValueFromTag(FGameplayTag SettingTag) const {
    return TEXT("");
}

FString UHaloUserSettings::GetStringValueFromName(const FName& PropertyName) const {
    return TEXT("");
}

int32 UHaloUserSettings::GetLocalUserIndex() const {
    return 0;
}

bool UHaloUserSettings::GetIsFirstTimeUserDevice() const {
    return false;
}

bool UHaloUserSettings::GetIsFirstTimeUser() const {
    return false;
}

int32 UHaloUserSettings::GetIntValueFromTag(FGameplayTag SettingTag) const {
    return 0;
}

int32 UHaloUserSettings::GetIntValueFromName(const FName& PropertyName) const {
    return 0;
}

float UHaloUserSettings::GetFloatValueFromTag(FGameplayTag SettingTag) const {
    return 0.0f;
}

float UHaloUserSettings::GetFloatValueFromName(const FName& PropertyName) const {
    return 0.0f;
}

double UHaloUserSettings::GetDoubleValueFromTag(FGameplayTag SettingTag) const {
    return 0.0;
}

double UHaloUserSettings::GetDoubleValueFromName(const FName& PropertyName) const {
    return 0.0;
}

bool UHaloUserSettings::GetAnySettingsChanged() const {
    return false;
}

void UHaloUserSettings::ApplyHaloUserSettings() {
}


