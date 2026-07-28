#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BlamSynchronizationRelevancyConfig.h"
#include "BlamSynchronizationCreationObjectQueueSettings.generated.h"

UCLASS(Blueprintable, Transient, Config=Engine)
class UBlamSynchronizationCreationObjectQueueSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CreationExecutionBudget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamSynchronizationRelevancyConfig RelevancyConfig;
    
    UBlamSynchronizationCreationObjectQueueSettings();

};

