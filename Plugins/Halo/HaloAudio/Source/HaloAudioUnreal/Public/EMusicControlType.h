#pragma once
#include "CoreMinimal.h"
#include "EMusicControlType.generated.h"

UENUM(BlueprintType)
enum class EMusicControlType : uint8 {
    StartEvent,
    StopEvent,
    SetState,
    SetRtpc,
    SetSwitch,
    ResetPriority,
    Count,
};

