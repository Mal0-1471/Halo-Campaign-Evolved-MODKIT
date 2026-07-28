#pragma once
#include "CoreMinimal.h"
#include "EVideoQualitySetting.generated.h"

UENUM(BlueprintType)
enum class EVideoQualitySetting : uint8 {
    VeryLow,
    Low,
    Medium,
    High,
    Ultra,
    Num,
};

