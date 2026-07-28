#pragma once
#include "CoreMinimal.h"
#include "EBlamWeaponBarrel.generated.h"

UENUM(BlueprintType)
enum class EBlamWeaponBarrel : uint8 {
    Primary,
    Secondary,
    Num,
    None = 255,
};

