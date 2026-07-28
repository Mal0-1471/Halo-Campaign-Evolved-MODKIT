#pragma once
#include "CoreMinimal.h"
#include "EBlamHapticsAffectedTriggerAction.generated.h"

UENUM(BlueprintType)
enum class EBlamHapticsAffectedTriggerAction : uint8 {
    WeaponFire,
    WeaponZoom,
    All,
};

