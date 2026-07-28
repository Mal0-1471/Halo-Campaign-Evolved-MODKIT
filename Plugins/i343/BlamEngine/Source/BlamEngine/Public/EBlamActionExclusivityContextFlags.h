#pragma once
#include "CoreMinimal.h"
#include "EBlamActionExclusivityContextFlags.generated.h"

UENUM(BlueprintType)
enum class EBlamActionExclusivityContextFlags : uint8 {
    None,
    OnFoot,
    InVehicle,
    FreeCam = 16,
    Respawning = 32,
};

