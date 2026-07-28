#include "HaloAudioPortalDoorRayCastThruComponent.h"

UHaloAudioPortalDoorRayCastThruComponent::UHaloAudioPortalDoorRayCastThruComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RaycastChannel = ECC_WorldDynamic;
}


