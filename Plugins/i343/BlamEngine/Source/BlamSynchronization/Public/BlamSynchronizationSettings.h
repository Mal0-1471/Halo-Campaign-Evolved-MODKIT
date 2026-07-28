#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "BlamSynchronizationObjectThrottlingConfig.h"
#include "BlamSynchronizationSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class BLAMSYNCHRONIZATION_API UBlamSynchronizationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlamStringTableId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamSynchronizationObjectThrottlingConfig ObjectThrottling;
    
    UBlamSynchronizationSettings();

};

