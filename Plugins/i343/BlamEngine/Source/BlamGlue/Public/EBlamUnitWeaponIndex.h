#pragma once
#include "CoreMinimal.h"
#include "EBlamUnitWeaponIndex.generated.h"

UENUM(BlueprintType)
enum class EBlamUnitWeaponIndex : uint8 {
    Primary,
    Secondary,
    Backpack,
    BackpackOther,
    Num,
    None = 255,
};

