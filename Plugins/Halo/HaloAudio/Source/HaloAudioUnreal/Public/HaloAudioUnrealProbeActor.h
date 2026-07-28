#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "HaloAudioUnrealOptionalRtpcValue.h"
#include "HaloAudioUnrealProbeActor.generated.h"

class UAkRtpc;

UCLASS(Blueprintable)
class HALOAUDIOUNREAL_API AHaloAudioUnrealProbeActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* AkRtpc;
    
    AHaloAudioUnrealProbeActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintNativeEvent)
    void UpdateProbeMaxRadius(double Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FHaloAudioUnrealOptionalRtpcValue TryGetRtpcValue();
    
};

