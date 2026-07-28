#pragma once
#include "CoreMinimal.h"
#include "EHudLayoutSetting.generated.h"

UENUM(BlueprintType)
enum class EHudLayoutSetting : uint8 {
    MotionTrackerUpperRight,
    MotionTrackerLowerLeft,
    Num,
};

