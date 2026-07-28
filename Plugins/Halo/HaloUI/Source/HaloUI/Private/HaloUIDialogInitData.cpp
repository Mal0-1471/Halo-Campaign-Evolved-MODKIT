#include "HaloUIDialogInitData.h"

UHaloUIDialogInitData::UHaloUIDialogInitData() {
    this->DefaultButtonIdx = 1;
    this->BackoutButton = EHaloUIDialogButtonSelection::DEFAULTBUTTON;
}

int32 UHaloUIDialogInitData::GetDefaultButtonIdx() const {
    return 0;
}

TArray<FText> UHaloUIDialogInitData::GetButtonTextList() const {
    return TArray<FText>();
}

EHaloUIDialogButtonSelection UHaloUIDialogInitData::GetBackoutButton() const {
    return EHaloUIDialogButtonSelection::DEFAULTBUTTON;
}


