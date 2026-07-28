#pragma once
#include "CoreMinimal.h"
#include "EBlamMarkerType.generated.h"

UENUM(BlueprintType)
enum class EBlamMarkerType : uint8 {
    None,
    ObjectTag,
    ModelMarker,
    PathfindingSphere,
    WaterVolumeFlow,
    Target,
    Garbage,
    Effects,
    AIHint,
};

