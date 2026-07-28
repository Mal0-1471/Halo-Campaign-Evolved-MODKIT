#pragma once
#include "CoreMinimal.h"
#include "HaloAudioSplinePointRtpcValues.generated.h"

USTRUCT(BlueprintType)
struct FHaloAudioSplinePointRtpcValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<float> RtpcValueArray;
    
    HALOAUDIOUNREAL_API FHaloAudioSplinePointRtpcValues();
};

