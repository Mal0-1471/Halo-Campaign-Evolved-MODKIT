#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "HaloAudioSplinePointRtpcValues.h"
#include "HaloAudioSplineMetadata.generated.h"

UCLASS(Blueprintable)
class HALOAUDIOUNREAL_API UHaloAudioSplineMetadata : public USplineMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHaloAudioSplinePointRtpcValues> PointParams;
    
    UHaloAudioSplineMetadata();

};

