#pragma once
#include "CoreMinimal.h"
#include "HaloAudioUnrealOptionalRtpcValue.generated.h"

USTRUCT(BlueprintType)
struct FHaloAudioUnrealOptionalRtpcValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    HALOAUDIOUNREAL_API FHaloAudioUnrealOptionalRtpcValue();
};

