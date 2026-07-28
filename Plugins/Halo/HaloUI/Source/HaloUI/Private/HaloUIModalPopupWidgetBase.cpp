#include "HaloUIModalPopupWidgetBase.h"

UHaloUIModalPopupWidgetBase::UHaloUIModalPopupWidgetBase() {
    this->bIsBackHandler = true;
    this->bIsModal = true;
    this->Title = NULL;
    this->Message = NULL;
    this->AsyncPopupAction = NULL;
}

void UHaloUIModalPopupWidgetBase::PopupAction(EHaloUIModalPopupResult InResult) {
}

void UHaloUIModalPopupWidgetBase::InitializePopup_Implementation(const UHaloUIPopupInitData* InitData) {
}

EHaloUIModalPopupType UHaloUIModalPopupWidgetBase::GetPopupType() const {
    return EHaloUIModalPopupType::Alert;
}


