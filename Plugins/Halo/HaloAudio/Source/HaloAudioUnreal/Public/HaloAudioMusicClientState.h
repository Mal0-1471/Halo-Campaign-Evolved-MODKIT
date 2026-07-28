#pragma once
#include "CoreMinimal.h"
#include "HaloAudioMusicClientState.generated.h"

class UAkStateValue;

USTRUCT(BlueprintType)
struct FHaloAudioMusicClientState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* AkStateValue;
    
    HALOAUDIOUNREAL_API FHaloAudioMusicClientState();
};

