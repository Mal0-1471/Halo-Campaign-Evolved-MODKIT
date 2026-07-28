#include "HaloPrivilegePlayerStateComponent.h"
#include "Net/UnrealNetwork.h"

UHaloPrivilegePlayerStateComponent::UHaloPrivilegePlayerStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bCrossPlayEnabled = true;
}

void UHaloPrivilegePlayerStateComponent::ServerSetPlayerPlatform_Implementation(const FString& InPlatform) {
}

void UHaloPrivilegePlayerStateComponent::ServerSetCrossplayEnabled_Implementation(bool bEnabled) {
}

void UHaloPrivilegePlayerStateComponent::OnRep_PlayerPlatform(const FString& OldPlatform) {
}

void UHaloPrivilegePlayerStateComponent::OnRep_CrossplayEnabled(bool bOldValue) {
}

void UHaloPrivilegePlayerStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHaloPrivilegePlayerStateComponent, bCrossPlayEnabled);
    DOREPLIFETIME(UHaloPrivilegePlayerStateComponent, PlayerPlatform);
}


