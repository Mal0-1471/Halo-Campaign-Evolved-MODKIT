#include "HaloUINavBarWidget.h"

UHaloUINavBarWidget::UHaloUINavBarWidget() {
    this->ButtonWidgetClass = NULL;
    this->orientation = Orient_Horizontal;
    this->BeforeButtonStyle = NULL;
    this->ActiveButtonStyle = NULL;
    this->AfterButtonStyle = NULL;
    this->ButtonGroup = NULL;
    this->PageSwitcher = NULL;
}

void UHaloUINavBarWidget::InitPagesAndButtons(UCommonActivatableWidgetSwitcher* WidgetSwitcher) {
}

void UHaloUINavBarWidget::HandlePageChanged(UWidget* Widget, int32 PageIndex) {
}

void UHaloUINavBarWidget::HandleButtonClicked(UCommonButtonBase* AssociatedButton, int32 ButtonIndex) {
}

UWidget* UHaloUINavBarWidget::GetSelectedButton() const {
    return NULL;
}


