#pragma once
#include "CoreMinimal.h"
#include "HaloAudioMusicClientRtpc.generated.h"

class UAkRtpc;

USTRUCT(BlueprintType)
struct FHaloAudioMusicClientRtpc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* Rtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RtpcValue;
    
    HALOAUDIOUNREAL_API FHaloAudioMusicClientRtpc();
};

