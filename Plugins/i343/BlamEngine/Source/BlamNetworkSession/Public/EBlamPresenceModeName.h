#pragma once
#include "CoreMinimal.h"
#include "EBlamPresenceModeName.generated.h"

UENUM(BlueprintType)
enum class EBlamPresenceModeName : uint8 {
    Campaign,
    Missions,
    Remix,
    Unknown,
    Count,
};

