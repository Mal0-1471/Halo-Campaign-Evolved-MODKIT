#pragma once
#include "CoreMinimal.h"
#include "HaloAudioSoundBase.h"
#include "HaloAudioPlayerVariant.generated.h"

UCLASS(Blueprintable)
class HALOAUDIOUNREAL_API UHaloAudioPlayerVariant : public UHaloAudioSoundBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloAudioSoundBase* PlayerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloAudioSoundBase* NonPlayerSound;
    
    UHaloAudioPlayerVariant();

};

