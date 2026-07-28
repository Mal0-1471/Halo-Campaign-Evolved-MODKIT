#pragma once
#include "CoreMinimal.h"
#include "EBlamPlayerGravitySetting.generated.h"

UENUM(BlueprintType)
enum class EBlamPlayerGravitySetting : uint8 {
    Unchanged,
    Percent50,
    Percent75,
    Percent100,
    Percent110,
    Percent120,
    Percent130,
    Percent140,
    Percent150,
    Percent160,
    Percent170,
    Percent180,
    Percent190,
    Percent200,
    Num,
};

