#include "HaloAudioPlacementComponent.h"

UHaloAudioPlacementComponent::UHaloAudioPlacementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Sound = NULL;
    this->InitiallyActive = true;
}

void UHaloAudioPlacementComponent::SetPlacementActive(bool bActive) {
}

bool UHaloAudioPlacementComponent::IsPlacementActive() {
    return false;
}


