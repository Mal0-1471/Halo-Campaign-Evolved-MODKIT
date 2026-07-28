#pragma once
#include "CoreMinimal.h"
#include "BlamSocialOptionsFlags.generated.h"

USTRUCT(BlueprintType)
struct BLAMGLUE_API FBlamSocialOptionsFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFriendlyFireEnabled: 1;
    
    FBlamSocialOptionsFlags();
};

