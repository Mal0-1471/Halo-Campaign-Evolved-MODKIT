#pragma once
#include "CoreMinimal.h"
#include "EHaloOnlinePrivilegeChangeType.generated.h"

UENUM(BlueprintType)
enum class EHaloOnlinePrivilegeChangeType : uint8 {
    Multiplayer,
    Communication,
    Crossplay,
};

