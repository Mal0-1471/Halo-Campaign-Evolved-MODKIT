#pragma once
#include "CoreMinimal.h"
#include "EBlamMouseAxis.generated.h"

UENUM(BlueprintType)
enum class EBlamMouseAxis : uint8 {
    X,
    Y,
    WheelPositive,
    WheelNegative,
    Num,
    None,
};

