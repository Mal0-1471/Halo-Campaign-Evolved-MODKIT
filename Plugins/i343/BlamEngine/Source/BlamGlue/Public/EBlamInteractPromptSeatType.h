#pragma once
#include "CoreMinimal.h"
#include "EBlamInteractPromptSeatType.generated.h"

UENUM(BlueprintType)
enum class EBlamInteractPromptSeatType : uint8 {
    None,
    Driver,
    DriverGunner,
    Gunner,
    Passenger,
    Boarding,
    Count,
};

