#include "GamepadLightEventData.h"

FGamepadLightEventData::FGamepadLightEventData() {
    this->EventType = EGamepadLightEventType::Timed;
    this->Priority = 0;
    this->bStopTrigger = false;
}

