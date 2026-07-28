#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "HaloAudioAcousticPortal.h"
#include "HaloAudioPortalProperties.h"
#include "HaloAudioVolumePortal.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class HALOAUDIOUNREAL_API AHaloAudioVolumePortal : public AVolume, public IHaloAudioAcousticPortal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloAudioPortalProperties Properties;
    
    AHaloAudioVolumePortal(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

