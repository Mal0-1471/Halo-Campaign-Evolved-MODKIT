#pragma once
#include "CoreMinimal.h"
#include "BlamAnimationKeyEventFlags.h"
#include "BlamAnimationEventSoundReference.generated.h"

class UBlamBaseSoundTagDataAsset;

USTRUCT(BlueprintType)
struct BLAMSYNCHRONIZATION_API FBlamAnimationEventSoundReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamBaseSoundTagDataAsset> Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamAnimationKeyEventFlags Flags;
    
    FBlamAnimationEventSoundReference();
};

