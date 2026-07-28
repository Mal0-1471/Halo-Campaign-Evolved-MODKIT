#include "HaloUIActivatableWidget.h"
#include "Templates/SubclassOf.h"

UHaloUIActivatableWidget::UHaloUIActivatableWidget() {
    this->bActiveStateWhenActivated = true;
    this->bActiveStateWhenVisible = false;
    this->bActiveStateUntilDisposed = false;
    this->OwningLayout = NULL;
    this->OwningLayerContainer = NULL;
    this->bImplementsGetFocusableWidget = false;
    this->bFocusDesiredTargetOnActivate = true;
    this->BackedOutSound = NULL;
    this->BoundActionSound = NULL;
    this->NavigationDeniedSound = NULL;
}

void UHaloUIActivatableWidget::UnregisterBinding(FInputActionBindingHandle& BindingHandle) {
}

void UHaloUIActivatableWidget::UnregisterAllBindings() {
}

void UHaloUIActivatableWidget::TryMoveFocusToPreviousLayer() {
}

void UHaloUIActivatableWidget::SetNavigationDeniedSoundOverride(const FHaloUIOptionalSound& Override) {
}

void UHaloUIActivatableWidget::SetBoundActionSoundOverride(const FHaloUIOptionalSound& Override) {
}

void UHaloUIActivatableWidget::SetBackedOutSoundOverride(const FHaloUIOptionalSound& Override) {
}

FInputActionBindingHandle UHaloUIActivatableWidget::RegisterBinding(const UInputAction* InputAction, const FText ActionNameOverride, const bool bShouldShowInActionBar, const bool bOverrideActionSound, UHaloUISoundBase* ActionSoundOverride, const FInputActionExecutedDelegate& Callback) {
    return FInputActionBindingHandle{};
}

void UHaloUIActivatableWidget::PlayNavigationDeniedSound(EUINavigation NavigationType) {
}

void UHaloUIActivatableWidget::PlayBackedOutSound() {
}

bool UHaloUIActivatableWidget::GetImplementsGetFocusableWidget() {
    return false;
}

UWidget* UHaloUIActivatableWidget::GetFocusableWidgetFromParent(TSubclassOf<UWidget> ParentType, const EUINavigation Direction) {
    return NULL;
}

UWidget* UHaloUIActivatableWidget::GetFocusableWidget_Implementation(const EUINavigation Direction) {
    return NULL;
}


