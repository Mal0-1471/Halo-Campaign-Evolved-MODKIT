#include "HaloUIUserWidget.h"

UHaloUIUserWidget::UHaloUIUserWidget() {
}

void UHaloUIUserWidget::UnregisterBinding(FInputActionBindingHandle& BindingHandle) {
}

void UHaloUIUserWidget::UnregisterAllBindings() {
}

FInputActionBindingHandle UHaloUIUserWidget::RegisterBinding(const UInputAction* InputAction, const FText ActionNameOverride, const bool bShouldShowInActionBar, const FInputActionExecutedDelegate& Callback) {
    return FInputActionBindingHandle{};
}


