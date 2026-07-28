#include "HaloAudioZonePartialVoxelGrid.h"
#include "Components/SceneComponent.h"

AHaloAudioZonePartialVoxelGrid::AHaloAudioZonePartialVoxelGrid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->VisualComponent = NULL;
}


