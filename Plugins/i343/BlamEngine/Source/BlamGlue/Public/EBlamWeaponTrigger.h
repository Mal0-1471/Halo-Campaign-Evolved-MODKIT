#pragma once
#include "CoreMinimal.h"
#include "EBlamWeaponTrigger.generated.h"

UENUM(BlueprintType)
enum class EBlamWeaponTrigger : uint8 {
    Primary,
    Secondary,
    Num,
    None = 255,
};

