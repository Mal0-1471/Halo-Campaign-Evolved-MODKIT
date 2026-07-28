#include "HaloUIButtonBase.h"
#include "Templates/SubclassOf.h"

UHaloUIButtonBase::UHaloUIButtonBase() {
    this->bShouldDeselectUponLosingFocus = false;
    this->NameText = NULL;
    this->DescriptionText = NULL;
    this->bAppearHoveredWhenFocused = false;
    this->bAppearSelectedOnlyWhenFocused = true;
    this->ButtonStateChangeThreshold = 0.50f;
    this->TriggeringEnhancedInputActionForAccept = NULL;
    this->NarrationWidgetType = ENarrationWidgetType::Button;
    this->NavigatedSound = NULL;
    this->HoveredSound = NULL;
    this->PressedSound = NULL;
    this->ClickedSound = NULL;
}

void UHaloUIButtonBase::SetVisibilityFromFilter(int32 UserIndex, const FHaloUIMenuItemFilter& Filter) {
}

void UHaloUIButtonBase::SetTriggeringEnhancedInputActionForAccept(UInputAction* InInputAction) {
}

void UHaloUIButtonBase::SetShouldDeselectUponLosingFocus(bool bInShouldDeselectUponLosingFocus) {
}

void UHaloUIButtonBase::SetSelectedStyle(TSubclassOf<UCommonButtonStyle> OverrideStyle, TSubclassOf<UCommonButtonStyle> BaseStyle) {
}

void UHaloUIButtonBase::SetNewPressedSoundOverride(const FHaloUIOptionalSound& Override) {
}

void UHaloUIButtonBase::SetNewHoveredSoundOverride(const FHaloUIOptionalSound& Override) {
}

void UHaloUIButtonBase::SetNavigatedSoundOverride(const FHaloUIOptionalSound& Override) {
}

void UHaloUIButtonBase::SetNameTextProperties(const FHaloUIButtonTextProperties& NewProperties) {
}

void UHaloUIButtonBase::SetDescriptionTextProperties(const FHaloUIButtonTextProperties& NewProperties) {
}

void UHaloUIButtonBase::SetClickedSoundOverride(const FHaloUIOptionalSound& Override) {
}

TSubclassOf<UCommonButtonStyle> UHaloUIButtonBase::SelectButtonStyle(TSubclassOf<UCommonButtonStyle> OverrideStyle, TSubclassOf<UCommonButtonStyle> BaseStyle) {
    return NULL;
}

void UHaloUIButtonBase::PlayUISound(UObject* WorldContextObject, UHaloUISoundBase* Sound, const FString& UseCase) {
}

void UHaloUIButtonBase::PlayTreeExpansionSound(bool bIsExpanded) {
}

void UHaloUIButtonBase::PlayToggleSound(bool bIsToggleOn) {
}

bool UHaloUIButtonBase::GetShouldDeselectUponLosingFocus() const {
    return false;
}

FHaloUIButtonTextProperties UHaloUIButtonBase::GetNameTextProperties() const {
    return FHaloUIButtonTextProperties{};
}

FHaloUIButtonTextProperties UHaloUIButtonBase::GetDescriptionTextProperties() const {
    return FHaloUIButtonTextProperties{};
}

void UHaloUIButtonBase::ApplyOptionalNameTextProperties(const FHaloUIButtonTextPropertiesOptional& OptionalProperties) {
}

void UHaloUIButtonBase::ApplyOptionalDescriptionTextProperties(const FHaloUIButtonTextPropertiesOptional& OptionalProperties) {
}


