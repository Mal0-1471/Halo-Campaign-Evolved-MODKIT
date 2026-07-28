#pragma once
#include "CoreMinimal.h"
#include "ESoftCeilingTypeEnum.generated.h"

UENUM()
enum class ESoftCeilingTypeEnum : int32 {
    Acceleration,
    SoftKill,
    SlipSurface,
};

