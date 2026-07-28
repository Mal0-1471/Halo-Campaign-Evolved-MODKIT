#pragma once
#include "CoreMinimal.h"
#include "BlamAnimNotify.h"
#include "BlamAnimationEventSoundReference.h"
#include "SoundBlamAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class BLAMSYNCHRONIZATION_API USoundBlamAnimNotify : public UBlamAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamAnimationEventSoundReference Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MarkerName;
    
    USoundBlamAnimNotify();

};

