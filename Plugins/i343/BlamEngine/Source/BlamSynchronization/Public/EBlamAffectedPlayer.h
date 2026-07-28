#pragma once
#include "CoreMinimal.h"
#include "EBlamAffectedPlayer.generated.h"

UENUM(BlueprintType)
enum class EBlamAffectedPlayer : uint8 {
    None,
    Player1,
    Player2,
    Player3 = 4,
    Player4 = 8,
    All = 15,
};

