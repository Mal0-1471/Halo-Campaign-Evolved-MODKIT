#pragma once
#include "CoreMinimal.h"
#include "BlamAnimationKeyEventFlags.h"
#include "BlamAnimationEventEffectReference.generated.h"

class UBlamBaseEffectTagDataAsset;

USTRUCT(BlueprintType)
struct BLAMSYNCHRONIZATION_API FBlamAnimationEventEffectReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamBaseEffectTagDataAsset> Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamAnimationKeyEventFlags Flags;
    
    FBlamAnimationEventEffectReference();
};

