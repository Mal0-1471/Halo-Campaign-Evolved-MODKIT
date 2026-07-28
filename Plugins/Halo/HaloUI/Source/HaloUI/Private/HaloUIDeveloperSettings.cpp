#include "HaloUIDeveloperSettings.h"

UHaloUIDeveloperSettings::UHaloUIDeveloperSettings() {
    this->bLoadingScreenAutoCloseOnLoadFinished = true;
    this->LoadingScreenMinimumDisplayTime = 3.00f;
    this->LoadingScreenTexturePath = TEXT("../../../Meteorite/Content/UI/Frontend/LoadingScreen/Textures/T_B30_LoadingScreenBackground.png");
    this->bShowNonBlockingLoadScreenAfterBlockingLoad = false;
    this->NonBlockingLoadScreenMinimumDisplayTime = 1.00f;
    this->UIUnitsBetweenTesselationDivisions = 64.00f;
    this->TextScalingSettings.AddDefaulted(4);
    this->SubtitleFontWeights.AddDefaulted(4);
    this->SubtitleFonts.AddDefaulted(1);
}

void UHaloUIDeveloperSettings::SetUnmappedActionTexture(const TSoftObjectPtr<UTexture2D>& InTexture) {
}

void UHaloUIDeveloperSettings::SetUIUnitsBetweenTesselationDivisions(float InUnits) {
}

void UHaloUIDeveloperSettings::SetShowNonBlockingLoadScreenAfterBlockingLoad(const bool Value) {
}

void UHaloUIDeveloperSettings::SetNonBlockingLoadScreenMinimumDisplayTime(const float InValue) {
}

void UHaloUIDeveloperSettings::SetNonBlockingLoadScreenClass(TSoftClassPtr<UHaloUIActivatableWidget> InClass) {
}

void UHaloUIDeveloperSettings::SetNarrationTextureDataTable(const TSoftObjectPtr<UHaloUINarrationTextureDataTable>& InTable) {
}

void UHaloUIDeveloperSettings::SetLoadingScreenTexturePath(const FName& InTexturePath) {
}

void UHaloUIDeveloperSettings::SetLoadingScreenMinimumDisplayTime(const float MinimumDisplayTime) {
}

void UHaloUIDeveloperSettings::SetLoadingScreenClass(TSoftClassPtr<UHaloUILoadingScreenBase> InClass) {
}

void UHaloUIDeveloperSettings::SetLoadingScreenAutoCloseOnLoadFinished(const bool bAutoCloseOnLoadFinished) {
}

void UHaloUIDeveloperSettings::SetDefaultTextEntryStyleClass(TSoftClassPtr<UHaloUITextEntryStyle> InStyle) {
}

void UHaloUIDeveloperSettings::SetDefaultSliderStyleClass(TSoftClassPtr<UHaloUISliderStyle> InStyle) {
}

void UHaloUIDeveloperSettings::SetDefaultScrollBarStyleClass(TSoftClassPtr<UHaloUIScrollBarStyle> InStyle) {
}

void UHaloUIDeveloperSettings::SetDefaultNumericTextBlockStyleClass(TSoftClassPtr<UHaloUINumericTextBlockStyle> InStyle) {
}

UHaloUISoundBase* UHaloUIDeveloperSettings::GetWidgetBackedOutSound() const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UHaloUIDeveloperSettings::GetUnmappedActionTexture() const {
    return NULL;
}

FSlateBrush UHaloUIDeveloperSettings::GetUnmappedActionBrush() const {
    return FSlateBrush{};
}

float UHaloUIDeveloperSettings::GetUIUnitsBetweenTesselationDivisions() const {
    return 0.0f;
}

UHaloUISoundBase* UHaloUIDeveloperSettings::GetTreeExpandSound() const {
    return NULL;
}

UHaloUISoundBase* UHaloUIDeveloperSettings::GetTreeCollapseSound() const {
    return NULL;
}

UHaloUISoundBase* UHaloUIDeveloperSettings::GetToggleOnSound() const {
    return NULL;
}

UHaloUISoundBase* UHaloUIDeveloperSettings::GetToggleOffSound() const {
    return NULL;
}

TArray<FTextScalingSetting> UHaloUIDeveloperSettings::GetTextScalingSettings() const {
    return TArray<FTextScalingSetting>();
}

FGameplayTag UHaloUIDeveloperSettings::GetSubtitleTextSizeCategory() const {
    return FGameplayTag{};
}

FGameplayTag UHaloUIDeveloperSettings::GetSubtitleFontWeightGameplayTagFromTagName(const FString& FontWeightTagName) {
    return FGameplayTag{};
}

FName UHaloUIDeveloperSettings::GetSubtitleFontWeightForGameplayTag(const FGameplayTag& FontWeightTag) const {
    return NAME_None;
}

UObject* UHaloUIDeveloperSettings::GetSubtitleFontForGameplayTag(const FGameplayTag& FontTag) const {
    return NULL;
}

UHaloUISoundBase* UHaloUIDeveloperSettings::GetSliderIncreaseSound() const {
    return NULL;
}

UHaloUISoundBase* UHaloUIDeveloperSettings::GetSliderDeniedSound() const {
    return NULL;
}

UHaloUISoundBase* UHaloUIDeveloperSettings::GetSliderDecreaseSound() const {
    return NULL;
}

bool UHaloUIDeveloperSettings::GetShowNonBlockingLoadScreenAfterBlockingLoad() const {
    return false;
}

float UHaloUIDeveloperSettings::GetNonBlockingLoadScreenMinimumDisplayTime() const {
    return 0.0f;
}

TSoftClassPtr<UHaloUIActivatableWidget> UHaloUIDeveloperSettings::GetNonBlockingLoadScreenClass() const {
    return NULL;
}

UHaloUISoundBase* UHaloUIDeveloperSettings::GetNavigationDeniedSound() const {
    return NULL;
}

UHaloUINarrationTextureDataTable* UHaloUIDeveloperSettings::GetNarrationTextureDataTableAsset() const {
    return NULL;
}

TSoftObjectPtr<UHaloUINarrationTextureDataTable> UHaloUIDeveloperSettings::GetNarrationTextureDataTable() const {
    return NULL;
}

FName UHaloUIDeveloperSettings::GetLoadingScreenTexturePath() const {
    return NAME_None;
}

float UHaloUIDeveloperSettings::GetLoadingScreenMinimumDisplayTime() const {
    return 0.0f;
}

TSoftClassPtr<UHaloUILoadingScreenBase> UHaloUIDeveloperSettings::GetLoadingScreenClass() const {
    return NULL;
}

bool UHaloUIDeveloperSettings::GetLoadingScreenAutoCloseOnLoadFinished() const {
    return false;
}

TSoftClassPtr<UHaloUITextEntryStyle> UHaloUIDeveloperSettings::GetDefaultTextEntryStyleClass() const {
    return NULL;
}

TSoftClassPtr<UHaloUISliderStyle> UHaloUIDeveloperSettings::GetDefaultSliderStyleClass() const {
    return NULL;
}

TSoftClassPtr<UHaloUIScrollBarStyle> UHaloUIDeveloperSettings::GetDefaultScrollBarStyleClass() const {
    return NULL;
}

TSoftClassPtr<UHaloUINumericTextBlockStyle> UHaloUIDeveloperSettings::GetDefaultNumericTextBlockStyleClass() const {
    return NULL;
}

UHaloUISoundBase* UHaloUIDeveloperSettings::GetButtonPressedSound() const {
    return NULL;
}

UHaloUISoundBase* UHaloUIDeveloperSettings::GetButtonNavigatedSound() const {
    return NULL;
}

UHaloUISoundBase* UHaloUIDeveloperSettings::GetButtonHoveredSound() const {
    return NULL;
}

UHaloUISoundBase* UHaloUIDeveloperSettings::GetButtonClickedSound() const {
    return NULL;
}

UHaloUISoundBase* UHaloUIDeveloperSettings::GetBoundActionSound() const {
    return NULL;
}


