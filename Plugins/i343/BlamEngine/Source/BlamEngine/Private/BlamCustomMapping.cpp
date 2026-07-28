#include "BlamCustomMapping.h"

FBlamCustomMapping::FBlamCustomMapping() {
    this->Action = EBlamInputAction::Jump;
    this->BindingSlot = EBlamKeyBindingSlot::Main;
    this->InputDevice = EBlamInputDeviceType::KeyboardAndMouse;
}

