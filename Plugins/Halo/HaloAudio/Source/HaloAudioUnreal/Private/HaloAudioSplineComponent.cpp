#include "HaloAudioSplineComponent.h"
#include "HaloAudioSplineMetadata.h"

UHaloAudioSplineComponent::UHaloAudioSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HaloAudioSplineMetadata = CreateDefaultSubobject<UHaloAudioSplineMetadata>(TEXT("HaloAudioSplineMetadata"));
    this->RtpcChannelArray.AddDefaulted(4);
}


