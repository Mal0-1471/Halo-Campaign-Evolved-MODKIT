#pragma once
#include "CoreMinimal.h"
#include "EHudNavpointDistanceUnitsSetting.generated.h"

UENUM(BlueprintType)
enum class EHudNavpointDistanceUnitsSetting : uint8 {
    Meters,
    Feet,
    Num,
};

