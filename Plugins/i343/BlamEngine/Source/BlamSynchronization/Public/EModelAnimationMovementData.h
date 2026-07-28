#pragma once
#include "CoreMinimal.h"
#include "EModelAnimationMovementData.generated.h"

UENUM(BlueprintType)
enum class EModelAnimationMovementData : uint8 {
    None,
    XY,
    XYYaw,
    XYZYaw,
    XYZFullRotation,
};

