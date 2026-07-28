#pragma once
#include "CoreMinimal.h"
#include "EVideoUpscalerSetting.generated.h"

UENUM(BlueprintType)
enum class EVideoUpscalerSetting : uint8 {
    TSR,
    DLSS,
    FSR,
    XeSS,
    Num,
};

