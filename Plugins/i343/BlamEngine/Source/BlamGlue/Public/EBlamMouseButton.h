#pragma once
#include "CoreMinimal.h"
#include "EBlamMouseButton.generated.h"

UENUM(BlueprintType)
enum class EBlamMouseButton : uint8 {
    Left,
    Middle,
    Right,
    X1,
    X2,
    Num,
    None,
};

