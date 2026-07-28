#pragma once
#include "CoreMinimal.h"
#include "EHaloAudioSpaceCategoryVariant.generated.h"

UENUM(BlueprintType)
enum class EHaloAudioSpaceCategoryVariant : uint8 {
    UseEnvironmentTag,
    UseParentZone,
    Interior,
    Exterior,
};

