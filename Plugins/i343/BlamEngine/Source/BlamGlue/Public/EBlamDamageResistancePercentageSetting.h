#pragma once
#include "CoreMinimal.h"
#include "EBlamDamageResistancePercentageSetting.generated.h"

UENUM(BlueprintType)
enum class EBlamDamageResistancePercentageSetting : uint8 {
    Unchanged,
    Percent10,
    Percent50,
    Percent90,
    Percent100,
    Percent110,
    Percent150,
    Percent200,
    Percent300,
    Percent500,
    Percent1000,
    Percent2000,
    Invulnerable,
    Num,
};

