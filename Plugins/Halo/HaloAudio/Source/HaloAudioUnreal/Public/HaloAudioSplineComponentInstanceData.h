#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "HaloAudioSplinePointRtpcValues.h"
#include "HaloAudioSplineComponentInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FHaloAudioSplineComponentInstanceData : public FSplineInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHaloAudioSplinePointRtpcValues> SplinePointRtpcValuesArray;
    
    HALOAUDIOUNREAL_API FHaloAudioSplineComponentInstanceData();
};

