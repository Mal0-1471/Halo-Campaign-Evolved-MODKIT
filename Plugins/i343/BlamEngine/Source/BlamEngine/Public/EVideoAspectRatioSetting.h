#pragma once
#include "CoreMinimal.h"
#include "EVideoAspectRatioSetting.generated.h"

UENUM(BlueprintType)
enum class EVideoAspectRatioSetting : uint8 {
    AspectRatio169,
    AspectRatio219,
    AspectRatio329,
    Count,
};

