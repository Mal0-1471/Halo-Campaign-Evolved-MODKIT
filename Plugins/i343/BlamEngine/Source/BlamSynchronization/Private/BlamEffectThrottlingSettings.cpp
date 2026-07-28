#include "BlamEffectThrottlingSettings.h"

UBlamEffectThrottlingSettings::UBlamEffectThrottlingSettings() {
    this->bBlamEffectThrottlingEnabled = true;
    this->bBlamEffectThrottlingCulling = true;
    this->BlamEffectThrottlingExecutionBudget = 1.00f;
    this->BlamEffectThrottlingNoCullRadius = 3000.00f;
    this->BlamEffectThrottlingRequestPurgeThreshold = 64;
    this->BlamEffectThrottlingPurgeGroupThreshold = 2;
    this->BlamEffectThrottlingPurgeAgeThreshold = 0.25f;
    this->BlamEffectThrottlingRelevanceDistanceFalloff = 30480.00f;
    this->BlamEffectThrottlingRelevanceDistanceWeight = 0.25f;
    this->BlamEffectThrottlingRelevanceFacingWeight = 1.00f;
    this->EffectConfigs.AddDefaulted(36);
}


