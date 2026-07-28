#include "BlamPlayerMappableKeySettings.h"

UBlamPlayerMappableKeySettings::UBlamPlayerMappableKeySettings() {
    this->InputDevice = EBlamInputDeviceType::KeyboardAndMouse;
    this->BindingSlot = EBlamKeyBindingSlot::Main;
    this->bIgnore = false;
}


