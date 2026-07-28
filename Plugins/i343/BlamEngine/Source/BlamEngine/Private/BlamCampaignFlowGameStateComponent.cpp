#include "BlamCampaignFlowGameStateComponent.h"
#include "Net/UnrealNetwork.h"

UBlamCampaignFlowGameStateComponent::UBlamCampaignFlowGameStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActiveCampaign = NULL;
    this->bIsInLASO = false;
}

void UBlamCampaignFlowGameStateComponent::OnRep_ActiveCampaign() const {
}

void UBlamCampaignFlowGameStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBlamCampaignFlowGameStateComponent, ActiveCampaign);
    DOREPLIFETIME(UBlamCampaignFlowGameStateComponent, bIsInLASO);
}


