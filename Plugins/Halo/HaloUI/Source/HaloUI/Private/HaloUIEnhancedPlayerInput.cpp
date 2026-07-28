#include "HaloUIEnhancedPlayerInput.h"

UHaloUIEnhancedPlayerInput::UHaloUIEnhancedPlayerInput() {
    this->DebugExecBindings.AddDefaulted(16);
}

FSlateBrush UHaloUIEnhancedPlayerInput::GetIconForInputDeviceKey(const ULocalPlayer* LocalPlayer, ECommonInputType InputType, FKey Key) {
    return FSlateBrush{};
}


