#include "BlamExperiencePlayerStateComponent.h"
#include "Net/UnrealNetwork.h"

UBlamExperiencePlayerStateComponent::UBlamExperiencePlayerStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bHasFinishedBlamMapLoad = false;
    this->bHasFinishedHaloActorPooling = false;
    this->bHasFinishedProcessingPsoCache = false;
}

void UBlamExperiencePlayerStateComponent::ServerMarkHasFinishedProcessingPsoCache_Implementation() {
}

void UBlamExperiencePlayerStateComponent::ServerMarkHasFinishedHaloActorPooling_Implementation() {
}

void UBlamExperiencePlayerStateComponent::ServerMarkFinishedBlamMapLoad_Implementation() {
}

void UBlamExperiencePlayerStateComponent::OnRep_bHasFinishedProcessingPsoCache() {
}

void UBlamExperiencePlayerStateComponent::OnRep_bHasFinishedHaloActorPooling() {
}

void UBlamExperiencePlayerStateComponent::OnRep_bHasFinishedBlamMapLoad() {
}

void UBlamExperiencePlayerStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBlamExperiencePlayerStateComponent, bHasFinishedBlamMapLoad);
    DOREPLIFETIME(UBlamExperiencePlayerStateComponent, bHasFinishedHaloActorPooling);
    DOREPLIFETIME(UBlamExperiencePlayerStateComponent, bHasFinishedProcessingPsoCache);
}


