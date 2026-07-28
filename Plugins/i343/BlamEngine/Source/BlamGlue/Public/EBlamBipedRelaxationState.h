#pragma once
#include "CoreMinimal.h"
#include "EBlamBipedRelaxationState.generated.h"

UENUM(BlueprintType)
enum class EBlamBipedRelaxationState : uint8 {
    None,
    InProgress,
    Finished,
    Num,
};

