#include "HaloUISubtitleWidget.h"
#include "Templates/SubclassOf.h"

UHaloUISubtitleWidget::UHaloUISubtitleWidget() {
    this->TextStyleClass = NULL;
    this->BorderStyleClass = NULL;
    this->DefaultModeData = NULL;
    this->EditorOnlyFallbackWidgetWidthForTextWrap = 2000.00f;
    this->ParentContainerLevelToUseForTextWrap = 1;
    this->LineWidgetForBuildingStrings = NULL;
    this->Background = NULL;
}

void UHaloUISubtitleWidget::UpdateTextCapsByString(const FString& Value) {
}

void UHaloUISubtitleWidget::UpdateTextCaps(const EHaloUISubtitleCaps Value) {
}

void UHaloUISubtitleWidget::UpdateSpeakerColor(const FHaloUISubtitleSpeakerColor& Color) {
}

void UHaloUISubtitleWidget::UpdateLineSpacing(const float Value) {
}

void UHaloUISubtitleWidget::UpdateLetterSpacing(const float Value) {
}

void UHaloUISubtitleWidget::UpdateFontWeight(const FGameplayTag Tag) {
}

void UHaloUISubtitleWidget::UpdateDialogueMatchesSpeakerColor(const bool Value) {
}

void UHaloUISubtitleWidget::UpdateDialogueColor(const FColor Value) {
}

void UHaloUISubtitleWidget::UpdateBackingOpacity(const float Value) {
}

void UHaloUISubtitleWidget::UpdateBackingColor(const FColor Value) {
}

void UHaloUISubtitleWidget::SetDefaultModeData(const TSubclassOf<UHaloUISubtitleModeData> InModeData) {
}

void UHaloUISubtitleWidget::ResetToDefaults() {
}

void UHaloUISubtitleWidget::HandleUpdateModeData(const FHaloUISubtitleModeStyle& NewModeData, const FGameplayTag CurrentMode) {
}

void UHaloUISubtitleWidget::HandleShowSubtitle(FHaloUIShowSubtitle ShowSubtitleData) {
}

TSubclassOf<UHaloUISubtitleModeData> UHaloUISubtitleWidget::GetDefaultModeData() const {
    return NULL;
}


