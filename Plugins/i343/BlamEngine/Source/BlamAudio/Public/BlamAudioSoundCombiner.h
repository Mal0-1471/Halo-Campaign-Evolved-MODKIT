#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BlamAudioSoundCombiner.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class BLAMAUDIO_API UBlamAudioSoundCombiner : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayEvent;
    
    UBlamAudioSoundCombiner();

};

