#pragma once
#include "CoreMinimal.h"
#include "EBlamHudCountdownState.generated.h"

UENUM(BlueprintType)
enum class EBlamHudCountdownState : uint8 {
    None,
    Running,
    Ended,
    Count,
};

