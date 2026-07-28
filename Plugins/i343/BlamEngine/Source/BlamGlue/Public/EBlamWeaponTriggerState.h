#pragma once
#include "CoreMinimal.h"
#include "EBlamWeaponTriggerState.generated.h"

UENUM(BlueprintType)
enum class EBlamWeaponTriggerState : uint8 {
    Idle,
    Charging,
    Charged,
    Spewing,
    Num,
};

