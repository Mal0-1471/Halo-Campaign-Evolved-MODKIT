#pragma once
#include "CoreMinimal.h"
#include "EBlamUserInterfaceObjectiveChangeReason.generated.h"

UENUM(BlueprintType)
enum class EBlamUserInterfaceObjectiveChangeReason : uint8 {
    Script,
    Revert,
};

