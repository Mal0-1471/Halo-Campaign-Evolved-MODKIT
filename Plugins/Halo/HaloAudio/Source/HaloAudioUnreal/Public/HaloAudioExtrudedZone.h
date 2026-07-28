#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "HaloAudioAcousticZone.h"
#include "HaloAudioZoneProperties.h"
#include "HaloAudioExtrudedZone.generated.h"

class UHaloAudioExtrudedShapeComponent;

UCLASS(Blueprintable)
class HALOAUDIOUNREAL_API AHaloAudioExtrudedZone : public AActor, public IHaloAudioAcousticZone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloAudioZoneProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumPartialGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHaloAudioExtrudedShapeComponent* ShapeComponent;
    
    AHaloAudioExtrudedZone(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BakeThisZoneAcoustics();
    
    UFUNCTION(BlueprintCallable)
    void BakeAllAcoustics();
    

    // Fix for true pure virtual functions not being implemented
};

