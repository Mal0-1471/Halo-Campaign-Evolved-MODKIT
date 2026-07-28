#pragma once
#include "CoreMinimal.h"
#include "EBlamJoystickPresets.generated.h"

UENUM(BlueprintType)
enum class EBlamJoystickPresets : uint8 {
    Standard,
    SouthPaw,
    Legacy,
    LegacySouthPaw,
    Num,
};

