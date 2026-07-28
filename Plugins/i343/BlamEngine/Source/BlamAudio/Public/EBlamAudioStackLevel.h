#pragma once
#include "CoreMinimal.h"
#include "EBlamAudioStackLevel.generated.h"

UENUM(BlueprintType)
enum class EBlamAudioStackLevel : uint8 {
    UE,
    Game,
    Driver,
    Default,
    Count,
};

