#pragma once
#include "CoreMinimal.h"
#include "EBlamCutsceneTitleTransitionType.generated.h"

UENUM(BlueprintType)
enum class EBlamCutsceneTitleTransitionType : uint8 {
    FadeIn,
    InstantIn,
    Num,
};

