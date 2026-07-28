#pragma once
#include "CoreMinimal.h"
#include "EQualityDefaultSetMethod.generated.h"

UENUM(BlueprintType)
enum class EQualityDefaultSetMethod : uint8 {
    ByGroupName,
    ByConstraints,
    ByQualityPreset,
    Disabled,
    ByAutoDetection,
};

