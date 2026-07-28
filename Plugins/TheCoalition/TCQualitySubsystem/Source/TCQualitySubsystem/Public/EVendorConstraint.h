#pragma once
#include "CoreMinimal.h"
#include "EVendorConstraint.generated.h"

UENUM(BlueprintType)
enum class EVendorConstraint : uint8 {
    AMD,
    Intel,
    Nvidia,
    Unknown,
    Any,
};

