#pragma once
#include "CoreMinimal.h"
#include "EVideoLowLatencyMode.generated.h"

UENUM(BlueprintType)
enum class EVideoLowLatencyMode : uint8 {
    Default,
    VendorSpecific,
    Num,
};

