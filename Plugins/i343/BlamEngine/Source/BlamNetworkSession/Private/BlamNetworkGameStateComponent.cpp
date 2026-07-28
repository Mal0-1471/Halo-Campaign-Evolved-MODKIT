#include "BlamNetworkGameStateComponent.h"
#include "Net/UnrealNetwork.h"

UBlamNetworkGameStateComponent::UBlamNetworkGameStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bSessionRunning = false;
}

void UBlamNetworkGameStateComponent::OnRep_bSessionRunning(bool bOldSessionRunning) {
}

void UBlamNetworkGameStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBlamNetworkGameStateComponent, bSessionRunning);
}


