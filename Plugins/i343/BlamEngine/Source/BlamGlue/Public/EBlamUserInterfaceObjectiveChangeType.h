#pragma once
#include "CoreMinimal.h"
#include "EBlamUserInterfaceObjectiveChangeType.generated.h"

UENUM(BlueprintType)
enum class EBlamUserInterfaceObjectiveChangeType : uint8 {
    None,
    New,
    Update,
    Failed,
};

