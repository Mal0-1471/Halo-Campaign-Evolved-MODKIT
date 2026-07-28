#include "HaloAudioPortalDoorCenterRayCastComponent.h"

UHaloAudioPortalDoorCenterRayCastComponent::UHaloAudioPortalDoorCenterRayCastComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RaycastChannel = ECC_WorldDynamic;
}


