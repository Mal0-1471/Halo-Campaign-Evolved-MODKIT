#pragma once
#include "CoreMinimal.h"
#include "EDeformationBrushType.generated.h"

UENUM(BlueprintType)
enum EDeformationBrushType {
    DeformationBrushDrawType_DefaultDynamicBrush,
    DeformationBrushDrawType_StaticPredeformaton,
    DeformationBrushDrawType_DrawOnDemand,
    DeformationBrushDrawType_DynamicStampType,
};

