#pragma once
#include "CoreMinimal.h"
#include "EBlamAICombatStatus.generated.h"

UENUM(BlueprintType)
enum class EBlamAICombatStatus : uint8 {
    Asleep,
    Idle,
    Alert,
    Active,
    Uninspected,
    Definite,
    Certain,
    Visible,
    ClearLineOfSight,
    Dangerous,
    Num,
};

