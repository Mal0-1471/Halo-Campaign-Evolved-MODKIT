#pragma once
#include "CoreMinimal.h"
#include "HaloAudioSoundBase.h"
#include "HaloAudioTranscriptionLine.h"
#include "HaloAudioSound.generated.h"

class UAkAudioEvent;
class UHaloAudioCategory;
class UHaloAudioTails;

UCLASS(Blueprintable)
class HALOAUDIOUNREAL_API UHaloAudioSound : public UHaloAudioSoundBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloAudioCategory* Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloAudioTails* Tails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloAudioTranscriptionLine TranscriptionLine;
    
    UHaloAudioSound();

};

