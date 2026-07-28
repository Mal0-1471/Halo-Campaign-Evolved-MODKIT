#pragma once
#include "CoreMinimal.h"
#include "HaloAudioSoundBase.h"
#include "HaloAudioVoiceEntry.h"
#include "HaloAudioVoiceVariations.generated.h"

class UHaloAudioCategory;

UCLASS(Blueprintable)
class HALOAUDIOUNREAL_API UHaloAudioVoiceVariations : public UHaloAudioSoundBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHaloAudioVoiceEntry> VoiceEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloAudioCategory* Category;
    
    UHaloAudioVoiceVariations();

};

