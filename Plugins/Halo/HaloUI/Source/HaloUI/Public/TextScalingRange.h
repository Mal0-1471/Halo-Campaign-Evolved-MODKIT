#pragma once
#include "CoreMinimal.h"
#include "TextScalingRange.generated.h"

USTRUCT(BlueprintType)
struct HALOUI_API FTextScalingRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaledSize;
    
    FTextScalingRange();
};

