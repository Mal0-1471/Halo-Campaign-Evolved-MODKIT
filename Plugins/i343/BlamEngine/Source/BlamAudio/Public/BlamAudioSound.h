#pragma once
#include "CoreMinimal.h"
#include "HaloAudioSoundBase.h"
#include "BlamAudioPitchRange.h"
#include "EBlamAudioStackLevel.h"
#include "BlamAudioSound.generated.h"

class UAkAudioEvent;
class UHaloAudioCategory;

UCLASS(Blueprintable)
class BLAMAUDIO_API UBlamAudioSound : public UHaloAudioSoundBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamAudioStackLevel BlamAudioStackLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlamAudioPitchRange> PitchRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloAudioCategory* Category;
    
    UBlamAudioSound();

};

