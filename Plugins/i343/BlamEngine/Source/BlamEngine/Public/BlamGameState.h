#pragma once
#include "CoreMinimal.h"
#include "HaloModularGameStateBase.h"
#include "Templates/SubclassOf.h"
#include "BlamGameState.generated.h"

class BLAMENGINE_API UActorComponent;
class BLAMENGINE_API UBlamCampaignFlowGameStateComponent;
class BLAMENGINE_API UBlamExperienceManagerComponent;
class BLAMENGINE_API UBlamNetworkGameStateComponent;
class BLAMENGINE_API UBlamSkullsGameStateComponent;

UCLASS(Blueprintable)
class BLAMENGINE_API ABlamGameState : public AHaloModularGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActorComponent> IncidentHandlerComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorComponent* IncidentHandlerComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBlamCampaignFlowGameStateComponent* BlamCampaignFlowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBlamNetworkGameStateComponent* BlamNetworkGameStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBlamSkullsGameStateComponent* BlamSkullsGameStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBlamExperienceManagerComponent* ExperienceManagerComponent;
    
public:
    ABlamGameState(const FObjectInitializer& ObjectInitializer);

};

