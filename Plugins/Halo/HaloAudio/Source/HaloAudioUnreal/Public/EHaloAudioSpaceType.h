#pragma once
#include "CoreMinimal.h"
#include "EHaloAudioSpaceType.generated.h"

UENUM(BlueprintType)
enum class EHaloAudioSpaceType : uint8 {
    InteriorNarrow,
    InteriorSmall,
    InteriorMed,
    InteriorLarge,
    ExteriorSmall,
    ExteriorMed,
    ExteriorLarge,
    ExteriorHalfOpen,
    ExteriorOpen,
    MAX,
};

