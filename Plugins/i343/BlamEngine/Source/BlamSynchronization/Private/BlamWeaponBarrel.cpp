#include "BlamWeaponBarrel.h"

FBlamWeaponBarrel::FBlamWeaponBarrel() {
    this->MagazineIndex = EBlamWeaponMagazine::Primary;
    this->State = EBlamWeaponBarrelState::Idle;
    this->RecoveryPercentage = 0.00f;
    this->RateOfFire = 0.00f;
    this->SecondsPerRound = 0.00f;
    this->EjectionPortPosition = 0.00f;
    this->CurrentError = 0.00f;
    this->PinnedError = 0.00f;
}

