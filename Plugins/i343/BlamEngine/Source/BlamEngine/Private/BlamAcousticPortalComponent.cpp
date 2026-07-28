#include "BlamAcousticPortalComponent.h"

UBlamAcousticPortalComponent::UBlamAcousticPortalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ScenarioObjectIdentifier = -1;
    this->bInvertedOpenDirection = false;
}

void UBlamAcousticPortalComponent::OnDevicePositionFractionChanged(float PreviousPositionFraction, float PositionFraction, EBlamPropertyChangeReason BlamPropertyChangeReason) {
}


