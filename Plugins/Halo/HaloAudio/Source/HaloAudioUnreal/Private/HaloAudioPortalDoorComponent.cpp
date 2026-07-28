#include "HaloAudioPortalDoorComponent.h"

UHaloAudioPortalDoorComponent::UHaloAudioPortalDoorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinOpenness = 0.00f;
    this->MaxOpenness = 1.00f;
    this->AffectsShape = true;
    this->bOpennessProviderInUse = false;
}

void UHaloAudioPortalDoorComponent::SetOpennessValue(double Value) {
}


