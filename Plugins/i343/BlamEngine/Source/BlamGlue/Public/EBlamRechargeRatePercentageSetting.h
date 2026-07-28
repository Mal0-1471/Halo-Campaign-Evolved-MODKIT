#pragma once
#include "CoreMinimal.h"
#include "EBlamRechargeRatePercentageSetting.generated.h"

UENUM(BlueprintType)
enum class EBlamRechargeRatePercentageSetting : uint8 {
    Unchanged,
    PercentNegative25,
    PercentNegative10,
    PercentNegative5,
    Percent0,
    Percent10,
    Percent25,
    Percent50,
    Percent75,
    Percent90,
    Percent100,
    Percent110,
    Percent125,
    Percent150,
    Percent200,
    Num,
};

