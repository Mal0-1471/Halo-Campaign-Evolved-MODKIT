#include "BlamHapticsEventTriggerResistanceWeapon.h"
#include "EBlamHapticsEventType.h"

UBlamHapticsEventTriggerResistanceWeapon::UBlamHapticsEventTriggerResistanceWeapon() {
    this->HapticsEventType = EBlamHapticsEventType::TriggerResistanceWeapon;
    this->StartPosition = 0;
    this->EndPosition = 0;
    this->Strength = 0;
}


