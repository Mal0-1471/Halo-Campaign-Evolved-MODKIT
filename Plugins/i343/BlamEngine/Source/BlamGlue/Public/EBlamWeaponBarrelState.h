#pragma once
#include "CoreMinimal.h"
#include "EBlamWeaponBarrelState.generated.h"

UENUM(BlueprintType)
enum class EBlamWeaponBarrelState : uint8 {
    Idle,
    Firing,
    LockedRecovering,
    LockedRecoveringEmpty,
    Recovering,
    Num,
};

