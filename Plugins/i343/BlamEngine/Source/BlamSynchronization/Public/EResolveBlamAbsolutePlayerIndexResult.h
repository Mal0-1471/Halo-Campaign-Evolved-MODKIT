#pragma once
#include "CoreMinimal.h"
#include "EResolveBlamAbsolutePlayerIndexResult.generated.h"

UENUM(BlueprintType)
enum class EResolveBlamAbsolutePlayerIndexResult : uint8 {
    Unresolved,
    ResolvedLocalPlayer,
    ResolvedRemotePlayer,
};

