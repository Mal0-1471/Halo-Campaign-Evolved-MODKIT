#pragma once
#include "CoreMinimal.h"
#include "HaloAudioRtpc.generated.h"

class UAkRtpc;

USTRUCT(BlueprintType)
struct FHaloAudioRtpc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* Rtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    HALOAUDIOUNREAL_API FHaloAudioRtpc();
};

