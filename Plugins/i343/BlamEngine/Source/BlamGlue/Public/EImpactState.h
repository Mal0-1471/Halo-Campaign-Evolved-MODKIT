#pragma once
#include "CoreMinimal.h"
#include "EImpactState.generated.h"

UENUM(BlueprintType)
enum class EImpactState : uint8 {
    Collision,
    Contact,
    Rolling,
    Grinding,
    Count,
};

