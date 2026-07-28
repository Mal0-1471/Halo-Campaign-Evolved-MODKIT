#pragma once
#include "CoreMinimal.h"
#include "BlamGameEngineSocialOptions.h"
#include "BlamGameEngineBaseVariantStorage.generated.h"

USTRUCT(BlueprintType)
struct BLAMGLUE_API FBlamGameEngineBaseVariantStorage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamGameEngineSocialOptions SocialOptions;
    
    FBlamGameEngineBaseVariantStorage();
};

