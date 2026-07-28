#pragma once
#include "CoreMinimal.h"
#include "EBlamItemInventoryState.generated.h"

UENUM(BlueprintType)
enum class EBlamItemInventoryState : uint8 {
    Free,
    Readied,
    Hidden,
    Stowed,
    Num,
};

