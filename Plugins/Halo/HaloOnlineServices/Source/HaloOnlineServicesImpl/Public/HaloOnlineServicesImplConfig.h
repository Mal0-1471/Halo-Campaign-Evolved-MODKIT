#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "XstsRelyingPartyConfig.h"
#include "HaloOnlineServicesImplConfig.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=HaloOnlineServices)
class HALOONLINESERVICESIMPL_API UHaloOnlineServicesImplConfig : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString XstsHaloRelyingPartyKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FXstsRelyingPartyConfig> XstsRelyingPartyConfigs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OfflineServiceRoutingEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrivilegeRetryDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrivilegeRetryMaxRetries;
    
    UHaloOnlineServicesImplConfig();

};

