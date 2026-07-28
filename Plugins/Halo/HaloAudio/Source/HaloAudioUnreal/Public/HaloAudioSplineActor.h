#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "HaloAudioSplineActor.generated.h"

class UHaloAudioPlacementComponent;
class UHaloAudioSplineComponent;

UCLASS(Blueprintable)
class HALOAUDIOUNREAL_API AHaloAudioSplineActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHaloAudioSplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHaloAudioPlacementComponent* PlacementComponent;
    
    AHaloAudioSplineActor(const FObjectInitializer& ObjectInitializer);

};

