#pragma once
#include "CoreMinimal.h"
#include "XstsRelyingPartyConfig.generated.h"

USTRUCT(BlueprintType)
struct FXstsRelyingPartyConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServiceEnvironment;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RelyingPartyKey;
    
    HALOONLINESERVICESIMPL_API FXstsRelyingPartyConfig();
};

