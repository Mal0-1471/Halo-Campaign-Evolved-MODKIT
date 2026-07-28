#include "BlamWeaponMagazine.h"

FBlamWeaponMagazine::FBlamWeaponMagazine() {
    this->RoundsInventory = 0;
    this->RoundsInventoryMaximum = 0;
    this->RoundsLoaded = 0;
    this->RoundsLoadedMaximum = 0;
    this->ReloadTimer = 0.00f;
    this->bReloading = false;
    this->bCanFire = false;
}

