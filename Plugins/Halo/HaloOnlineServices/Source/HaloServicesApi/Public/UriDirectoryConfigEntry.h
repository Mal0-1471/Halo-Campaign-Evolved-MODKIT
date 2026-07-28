#pragma once
#include "CoreMinimal.h"
#include "EUriDirectoryAuthenticationMethod.h"
#include "UriDirectoryConfigEntry.generated.h"

USTRUCT(BlueprintType)
struct FUriDirectoryConfigEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServiceEnvironment;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Uri;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUriDirectoryAuthenticationMethod AuthenticationMethod;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timeout;
    
    HALOSERVICESAPI_API FUriDirectoryConfigEntry();
};

