#pragma once
#include "CoreMinimal.h"
#include "EBlamWeaponMagazine.generated.h"

UENUM(BlueprintType)
enum class EBlamWeaponMagazine : uint8 {
    Primary,
    Secondary,
    Num,
    None = 255,
};

