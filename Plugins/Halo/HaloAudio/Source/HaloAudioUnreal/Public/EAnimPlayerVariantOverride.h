#pragma once
#include "CoreMinimal.h"
#include "EAnimPlayerVariantOverride.generated.h"

UENUM(BlueprintType)
enum class EAnimPlayerVariantOverride : uint8 {
    Default,
    NonPlayer,
    Player,
};

