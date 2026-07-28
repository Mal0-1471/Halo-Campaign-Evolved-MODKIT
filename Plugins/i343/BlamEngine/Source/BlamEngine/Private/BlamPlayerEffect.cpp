#include "BlamPlayerEffect.h"

FBlamPlayerEffect::FBlamPlayerEffect() {
    this->LocalPlayerIndex = 0;
    this->DamageScale = 0.00f;
    this->NormalizedBodyDamage = 0.00f;
    this->NormalizedShieldDamage = 0.00f;
    this->NormalizedTotalDamage = 0.00f;
    this->DataAsset = NULL;
}

