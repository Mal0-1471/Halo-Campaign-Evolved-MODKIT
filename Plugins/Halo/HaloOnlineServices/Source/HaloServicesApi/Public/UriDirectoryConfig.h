#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UriDirectoryConfigEntry.h"
#include "UriDirectoryConfig.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=HaloOnlineServices)
class UUriDirectoryConfig : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUriDirectoryConfigEntry> UriList;
    
    UUriDirectoryConfig();

};

