#include "BlamDecalManagerSubsystem.h"

UBlamDecalManagerSubsystem::UBlamDecalManagerSubsystem() {
    this->DecalOwner = NULL;
}

int32 UBlamDecalManagerSubsystem::SpawnTrackedDecalDelayed(UMaterialInterface* DecalMaterial, const FTransform& DecalTransform, const FVector& DecalSize, const float SpawnDelayTime) {
    return 0;
}

int32 UBlamDecalManagerSubsystem::SpawnTrackedDecal(UMaterialInterface* DecalMaterial, const FTransform& DecalTransform, const FVector& DecalSize) {
    return 0;
}

bool UBlamDecalManagerSubsystem::DestroyTrackedDecal(int32 DecalIndentifier) {
    return false;
}


