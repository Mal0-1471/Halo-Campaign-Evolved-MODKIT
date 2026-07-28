#pragma once
#include "CoreMinimal.h"
#include "SandboxToServiceEnvironmentMapping.generated.h"

USTRUCT(BlueprintType)
struct HALOONLINECORE_API FSandboxToServiceEnvironmentMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Sandbox;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServiceEnvironment;
    
    FSandboxToServiceEnvironmentMapping();
};

