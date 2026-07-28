#pragma once
#include "CoreMinimal.h"
#include "ECreateEventResult.generated.h"

UENUM(BlueprintType)
enum class ECreateEventResult : uint8 {
    Success,
    Failure,
};

