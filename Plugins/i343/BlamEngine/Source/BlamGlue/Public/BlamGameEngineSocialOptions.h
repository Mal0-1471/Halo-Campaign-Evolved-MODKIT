#pragma once
#include "CoreMinimal.h"
#include "BlamSocialOptionsFlags.h"
#include "BlamGameEngineSocialOptions.generated.h"

USTRUCT(BlueprintType)
struct BLAMGLUE_API FBlamGameEngineSocialOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamSocialOptionsFlags Flags;
    
    FBlamGameEngineSocialOptions();
};

