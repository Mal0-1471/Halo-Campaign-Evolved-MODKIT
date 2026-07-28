#include "BlamPlayerTraitWeapons.h"

FBlamPlayerTraitWeapons::FBlamPlayerTraitWeapons() {
    this->DamageModifierPercentageSetting = EBlamDamageModifierPercentageSetting::Unchanged;
    this->MeleeDamageModifierPercentageSetting = EBlamDamageModifierPercentageSetting::Unchanged;
    this->RechargingGrenadesSetting = EBlamBooleanTrait::Unchanged;
    this->WeaponPickupSetting = EBlamBooleanTrait::Unchanged;
    this->InfiniteAmmoSetting = EBlamInfiniteAmmoSetting::Unchanged;
}

