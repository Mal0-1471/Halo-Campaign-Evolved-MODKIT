#pragma once
#include "CoreMinimal.h"
#include "HaloAudioMusicClientPlayingState.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHaloAudioMusicClientPlayingState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAkAudioEvent> StartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAkAudioEvent> StopEvent;
    
    HALOAUDIOUNREAL_API FHaloAudioMusicClientPlayingState();
};

