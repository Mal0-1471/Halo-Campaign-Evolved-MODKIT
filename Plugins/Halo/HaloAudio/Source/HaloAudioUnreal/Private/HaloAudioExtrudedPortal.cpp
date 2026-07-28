#include "HaloAudioExtrudedPortal.h"
#include "Components/SceneComponent.h"

AHaloAudioExtrudedPortal::AHaloAudioExtrudedPortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Default Scene Root"));
    this->VisualComponent = NULL;
    this->DoorComponent = NULL;
    this->bShapeInUse = false;
}

void AHaloAudioExtrudedPortal::BakeThisPortalAcoustics() {
}

void AHaloAudioExtrudedPortal::BakeAllAcoustics() {
}


