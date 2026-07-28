#include "HaloUIButtonContainer.h"
#include "Components/SlateWrapperTypes.h"

UHaloUIButtonContainer::UHaloUIButtonContainer() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->orientation = Orient_Horizontal;
    this->bSelectionRequired = false;
    this->DefaultSelectedIndex = 0;
    this->NarrationItemType = ENarrationItemType::Item;
    this->ButtonGroup = NULL;
}

void UHaloUIButtonContainer::SetInitialFocus(bool bResetSelection) {
}

void UHaloUIButtonContainer::SelectPreviousButton() {
}

void UHaloUIButtonContainer::SelectNextButton() {
}

UWidget* UHaloUIButtonContainer::SelectInitialChild(bool bResetSelection) {
    return NULL;
}

bool UHaloUIButtonContainer::ReplaceButtonContainerChildAt(int32 Index, UHaloUIButtonBase* Content) {
    return false;
}

void UHaloUIButtonContainer::HandleButtonGroupSelectionChanged(UCommonButtonBase* AssociatedButton, int32 ButtonIndex) {
}

UHaloUIButtonBase* UHaloUIButtonContainer::GetSelectedButton() const {
    return NULL;
}

UWidget* UHaloUIButtonContainer::GetLastChild(bool bEnabledOnly) const {
    return NULL;
}

UWidget* UHaloUIButtonContainer::GetFocusableWidget_Implementation(const EUINavigation Direction) {
    return NULL;
}

UWidget* UHaloUIButtonContainer::GetFirstChild(bool bEnabledOnly) const {
    return NULL;
}

UHaloUIButtonContainerSlot* UHaloUIButtonContainer::AddChildToButtonContainer(UHaloUIButtonBase* Content) {
    return NULL;
}


