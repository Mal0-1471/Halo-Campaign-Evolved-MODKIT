#include "BlamPlayerTraitVitality.h"

FBlamPlayerTraitVitality::FBlamPlayerTraitVitality() {
    this->DamageResistancePercentageSetting = EBlamDamageResistancePercentageSetting::Unchanged;
    this->BodyRechargeRatePercentageSetting = EBlamRechargeRatePercentageSetting::Unchanged;
    this->ShieldRechargeRatePercentageSetting = EBlamRechargeRatePercentageSetting::Unchanged;
    this->DeathlessSetting = EBlamBooleanTrait::Unchanged;
}

