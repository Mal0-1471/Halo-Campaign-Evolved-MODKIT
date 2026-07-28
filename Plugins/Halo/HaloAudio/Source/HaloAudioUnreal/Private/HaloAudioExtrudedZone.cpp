#include "HaloAudioExtrudedZone.h"
#include "HaloAudioExtrudedShapeComponent.h"

AHaloAudioExtrudedZone::AHaloAudioExtrudedZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHaloAudioExtrudedShapeComponent>(TEXT("ExtrudedShape"));
    this->MaximumPartialGridSize = 100000.00f;
    this->ShapeComponent = (UHaloAudioExtrudedShapeComponent*)RootComponent;
}

void AHaloAudioExtrudedZone::BakeThisZoneAcoustics() {
}

void AHaloAudioExtrudedZone::BakeAllAcoustics() {
}


