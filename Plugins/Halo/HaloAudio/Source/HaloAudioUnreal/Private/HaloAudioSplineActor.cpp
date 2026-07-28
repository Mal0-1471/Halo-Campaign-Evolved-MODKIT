#include "HaloAudioSplineActor.h"
#include "Components/SceneComponent.h"
#include "HaloAudioPlacementComponent.h"
#include "HaloAudioSplineComponent.h"

AHaloAudioSplineActor::AHaloAudioSplineActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SplineComponent = CreateDefaultSubobject<UHaloAudioSplineComponent>(TEXT("HaloAudioSplineComponent"));
    this->PlacementComponent = CreateDefaultSubobject<UHaloAudioPlacementComponent>(TEXT("HaloAudioPlacementComponent"));
    this->PlacementComponent->SetupAttachment(RootComponent);
    this->SplineComponent->SetupAttachment(RootComponent);
}


