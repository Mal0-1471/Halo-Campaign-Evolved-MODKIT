#include "InputMapperOutputErrorData.h"

FInputMapperOutputErrorData::FInputMapperOutputErrorData() {
    this->ExclusivityErrorAction = EBlamInputAction::Jump;
    this->ExclusivityErrorSlot = EBlamKeyBindingSlot::Main;
}

