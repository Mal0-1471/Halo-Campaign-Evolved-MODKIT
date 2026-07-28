#pragma once
#include "CoreMinimal.h"
#include "EVideoFramerateSetting.generated.h"

UENUM(BlueprintType)
enum class EVideoFramerateSetting : uint8 {
    FPS30,
    FPS60,
    Num,
};

