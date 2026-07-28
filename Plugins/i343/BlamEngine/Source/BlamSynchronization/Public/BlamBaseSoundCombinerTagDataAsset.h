#pragma once
#include "CoreMinimal.h"
#include "BlamBaseSoundTagDataAsset.h"
#include "BlamBaseSoundCombinerTagDataAsset.generated.h"

class UBlamAudioSoundCombiner;

UCLASS(Abstract, Blueprintable)
class BLAMSYNCHRONIZATION_API UBlamBaseSoundCombinerTagDataAsset : public UBlamBaseSoundTagDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlamAudioSoundCombiner* AssetReference;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBlamAudioSoundCombiner* DefaultAssetReference;
    
public:
    UBlamBaseSoundCombinerTagDataAsset();

};

