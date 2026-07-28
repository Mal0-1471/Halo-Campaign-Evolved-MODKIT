#pragma once
#include "CoreMinimal.h"
#include "EHaloAudioZoneType.generated.h"

UENUM(BlueprintType)
enum EHaloAudioZoneType {
    PropagateWalls,
    PropagateTransparentPlayspace,
    PropagateTransparentReverb,
    Override,
    RemoveVoxels,
};

