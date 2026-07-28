#pragma once
#include "CoreMinimal.h"
#include "EBlamPlayerSpeedSetting.generated.h"

UENUM(BlueprintType)
enum class EBlamPlayerSpeedSetting : uint8 {
    Unchanged,
    Percent0,
    Percent25,
    Percent50,
    Percent75,
    Percent90,
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
    Percent300,
    Num,
};

