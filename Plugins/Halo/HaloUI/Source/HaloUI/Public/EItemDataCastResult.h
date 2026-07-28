#pragma once
#include "CoreMinimal.h"
#include "EItemDataCastResult.generated.h"

UENUM(BlueprintType)
enum class EItemDataCastResult : uint8 {
    CastSucceeded,
    CastFailed,
};

