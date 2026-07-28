#pragma once
#include "CoreMinimal.h"
#include "EDeformationBrushUsage.generated.h"

UENUM(BlueprintType)
enum EDeformationBrushUsage {
    DeformationBrushUsage_DeformationOnly,
    DeformationBrushUsage_MeltingOnly,
    DeformationBrushUsage_BothDeformationAndMelting,
};

