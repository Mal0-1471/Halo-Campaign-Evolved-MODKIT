#include "BlamExperienceManagerComponent.h"
#include "Net/UnrealNetwork.h"

UBlamExperienceManagerComponent::UBlamExperienceManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentExperience = NULL;
    this->bWaitingForAllInitialPlayersToLoadLevel = true;
    this->bWaitingForAllInitialPlayersToBeReadyForGameplay = true;
    this->bWaitingForBlamGameplayStart = true;
}

void UBlamExperienceManagerComponent::OnRep_CurrentExperience() {
}

void UBlamExperienceManagerComponent::OnRep_bWaitingForBlamGameplayStart() {
}

void UBlamExperienceManagerComponent::OnRep_bWaitingForAllInitialPlayersToLoadLevel() {
}

void UBlamExperienceManagerComponent::OnRep_bWaitingForAllInitialPlayersToBeReadyForGameplay() {
}

void UBlamExperienceManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBlamExperienceManagerComponent, CurrentExperience);
    DOREPLIFETIME(UBlamExperienceManagerComponent, bWaitingForAllInitialPlayersToLoadLevel);
    DOREPLIFETIME(UBlamExperienceManagerComponent, bWaitingForAllInitialPlayersToBeReadyForGameplay);
    DOREPLIFETIME(UBlamExperienceManagerComponent, bWaitingForBlamGameplayStart);
}


