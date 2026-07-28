#pragma once
#include "CoreMinimal.h"
#include "EBlamUnitEquipmentIndex.generated.h"

UENUM(BlueprintType)
enum class EBlamUnitEquipmentIndex : uint8 {
    IntrinsicPrimary,
    IntrinsicSecondary,
    Current,
    Num,
    None = 255,
};

