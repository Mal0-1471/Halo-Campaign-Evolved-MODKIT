#include "BlamWeaponTrigger.h"

FBlamWeaponTrigger::FBlamWeaponTrigger() {
    this->ActiveBarrelIndex = EBlamWeaponBarrel::Primary;
    this->State = EBlamWeaponTriggerState::Idle;
    this->ChargedFraction = 0.00f;
    this->SpewFraction = 0.00f;
    this->bTriggerDown = false;
}

