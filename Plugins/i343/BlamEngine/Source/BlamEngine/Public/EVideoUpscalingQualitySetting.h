#pragma once
#include "CoreMinimal.h"
#include "EVideoUpscalingQualitySetting.generated.h"

UENUM(BlueprintType)
enum class EVideoUpscalingQualitySetting : uint8 {
    Low,
    Medium,
    High,
    Ultra,
    Native,
    Num,
};

