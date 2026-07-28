#pragma once
#include "CoreMinimal.h"
#include "HaloAudioSoundBase.h"
#include "EBlamAudioStackLevel.h"
#include "BlamAudioLoopingSound.generated.h"

class UAkAudioEvent;
class UHaloAudioCategory;

UCLASS(Blueprintable)
class BLAMAUDIO_API UBlamAudioLoopingSound : public UHaloAudioSoundBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamAudioStackLevel BlamAudioStackLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayLoopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SwitchToAltLoopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SwitchToLoopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopLoopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloAudioCategory* Category;
    
    UBlamAudioLoopingSound();

};

