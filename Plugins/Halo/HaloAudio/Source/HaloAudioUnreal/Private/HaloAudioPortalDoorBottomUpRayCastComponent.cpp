#include "HaloAudioPortalDoorBottomUpRayCastComponent.h"

UHaloAudioPortalDoorBottomUpRayCastComponent::UHaloAudioPortalDoorBottomUpRayCastComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RaycastChannel = ECC_WorldDynamic;
}


