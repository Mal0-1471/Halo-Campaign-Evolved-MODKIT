#pragma once
#include "CoreMinimal.h"
#include "EBlamHapticsEventPriority.generated.h"

UENUM(BlueprintType)
enum class EBlamHapticsEventPriority : uint8 {
    High,
    Normal,
    Low,
};

