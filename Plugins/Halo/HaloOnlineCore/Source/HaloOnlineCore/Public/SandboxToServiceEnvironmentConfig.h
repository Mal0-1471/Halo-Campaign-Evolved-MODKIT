#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "PlayFabTitleIDConfig.h"
#include "SandboxToServiceEnvironmentMapping.h"
#include "SandboxToServiceEnvironmentConfig.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=HaloOnlineServices)
class HALOONLINECORE_API USandboxToServiceEnvironmentConfig : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSandboxToServiceEnvironmentMapping> SandboxMappings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayFabTitleIDConfig> PlayFabTitleIDConfigs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultServiceEnvironment;
    
    USandboxToServiceEnvironmentConfig();

};

