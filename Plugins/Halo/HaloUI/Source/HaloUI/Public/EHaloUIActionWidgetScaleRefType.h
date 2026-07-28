#pragma once
#include "CoreMinimal.h"
#include "EHaloUIActionWidgetScaleRefType.generated.h"

UENUM(BlueprintType)
enum class EHaloUIActionWidgetScaleRefType : uint8 {
    X,
    Y,
    MinXY,
    MaxXY,
    Count,
};

