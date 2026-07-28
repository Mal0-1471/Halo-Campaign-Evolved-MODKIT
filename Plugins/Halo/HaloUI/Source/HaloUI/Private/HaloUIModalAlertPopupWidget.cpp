#include "HaloUIModalAlertPopupWidget.h"

UHaloUIModalAlertPopupWidget::UHaloUIModalAlertPopupWidget() {
    this->Button = NULL;
}

bool UHaloUIModalAlertPopupWidget::GetPriority() const {
    return false;
}

void UHaloUIModalAlertPopupWidget::ButtonActivatedResponse(UCommonButtonBase* NewButton) {
}


