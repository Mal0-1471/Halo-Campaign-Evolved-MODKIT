#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "HaloAudioAcousticZone.h"
#include "HaloAudioZoneProperties.h"
#include "HaloAudioVolumeZone.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class HALOAUDIOUNREAL_API AHaloAudioVolumeZone : public AVolume, public IHaloAudioAcousticZone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloAudioZoneProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumPartialGridSize;
    
    AHaloAudioVolumeZone(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

