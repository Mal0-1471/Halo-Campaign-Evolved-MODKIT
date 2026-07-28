#pragma once
#include "CoreMinimal.h"
#include "HaloAudioAttachedPlayingId.generated.h"

class UHaloAudioTrackingComponent;

USTRUCT(BlueprintType)
struct HALOAUDIOUNREAL_API FHaloAudioAttachedPlayingId {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHaloAudioTrackingComponent> TrackingComponentRef;
    
public:
    FHaloAudioAttachedPlayingId();
};

