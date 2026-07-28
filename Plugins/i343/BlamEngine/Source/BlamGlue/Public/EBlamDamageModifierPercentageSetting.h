#pragma once
#include "CoreMinimal.h"
#include "EBlamDamageModifierPercentageSetting.generated.h"

UENUM(BlueprintType)
enum class EBlamDamageModifierPercentageSetting : uint8 {
    Unchanged,
    Percent0,
    Percent25,
    Percent50,
    Percent75,
    Percent90,
    Percent100,
    Percent110,
    Percent125,
    Percent150,
    Percent200,
    Percent300,
    Fatality,
    Num,
};

