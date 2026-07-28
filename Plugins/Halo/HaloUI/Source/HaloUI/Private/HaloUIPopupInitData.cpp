#include "HaloUIPopupInitData.h"

UHaloUIPopupInitData::UHaloUIPopupInitData() {
}

FText UHaloUIPopupInitData::GetTitle() const {
    return FText::GetEmpty();
}

EHaloUIModalPopupType UHaloUIPopupInitData::GetPopupType() const {
    return EHaloUIModalPopupType::Alert;
}

TSoftClassPtr<UHaloUIModalPopupWidgetBase> UHaloUIPopupInitData::GetPopupClass() const {
    return NULL;
}

FText UHaloUIPopupInitData::GetMessage() const {
    return FText::GetEmpty();
}


