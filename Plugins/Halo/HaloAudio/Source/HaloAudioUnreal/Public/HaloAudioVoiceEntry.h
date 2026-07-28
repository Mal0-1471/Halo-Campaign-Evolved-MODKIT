#pragma once
#include "CoreMinimal.h"
#include "HaloAudioTranscriptionLine.h"
#include "HaloAudioVoiceEntry.generated.h"

class UAkAudioEvent;
class UAnimSequence;

USTRUCT(BlueprintType)
struct HALOAUDIOUNREAL_API FHaloAudioVoiceEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VoiceEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloAudioTranscriptionLine Transcription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> LipSync;
    
    FHaloAudioVoiceEntry();
};

