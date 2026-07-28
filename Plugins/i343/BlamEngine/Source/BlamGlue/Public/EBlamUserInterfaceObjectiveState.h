#pragma once
#include "CoreMinimal.h"
#include "EBlamUserInterfaceObjectiveState.generated.h"

UENUM(BlueprintType)
enum class EBlamUserInterfaceObjectiveState : uint8 {
    Hidden,
    Unavailable,
    Shown,
    Completed,
};

