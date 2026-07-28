#pragma once
#include "CoreMinimal.h"
#include "PlayFabTitleIDConfig.generated.h"

USTRUCT(BlueprintType)
struct HALOONLINECORE_API FPlayFabTitleIDConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServiceEnvironment;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleId;
    
    FPlayFabTitleIDConfig();
};

