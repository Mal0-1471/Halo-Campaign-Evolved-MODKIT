#pragma once
#include "CoreMinimal.h"
#include "EBlamBooleanTrait.generated.h"

UENUM(BlueprintType)
enum class EBlamBooleanTrait : uint8 {
    Unchanged,
    Off,
    On,
    Num,
};

