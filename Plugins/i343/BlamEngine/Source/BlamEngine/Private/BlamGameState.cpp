#include "BlamGameState.h"
#include "BlamExperienceManagerComponent.h"
#include "BlamNetworkGameStateComponent.h"
#include "BlamSkullsGameStateComponent.h"
#include "BlamCampaignFlowGameStateComponent.h"

ABlamGameState::ABlamGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    //this->IncidentHandlerComponentclass = NULL;
    this->IncidentHandlerComponent = NULL;
    this->BlamCampaignFlowComponent = CreateDefaultSubobject<UBlamCampaignFlowGameStateComponent>(TEXT("BlamCampaignFlowGameStateComponent"));
    this->BlamNetworkGameStateComponent = CreateDefaultSubobject<UBlamNetworkGameStateComponent>(TEXT("BlamNetworkGameStateComponent"));
    this->BlamSkullsGameStateComponent = CreateDefaultSubobject<UBlamSkullsGameStateComponent>(TEXT("BlamSkullsGameStateComponent"));
    this->ExperienceManagerComponent = CreateDefaultSubobject<UBlamExperienceManagerComponent>(TEXT("ExperienceManagerComponent"));
}


