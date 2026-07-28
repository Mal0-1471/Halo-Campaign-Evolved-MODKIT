#pragma once
#include "CoreMinimal.h"
#include "EBlamHapticsEventType.generated.h"

UENUM(BlueprintType)
enum class EBlamHapticsEventType : uint8 {
    None,
    DeviceVibration,
    TriggerVibration,
    TriggerResistanceSlope,
    TriggerResistanceWeapon,
    TriggerResistanceGeneric,
};

