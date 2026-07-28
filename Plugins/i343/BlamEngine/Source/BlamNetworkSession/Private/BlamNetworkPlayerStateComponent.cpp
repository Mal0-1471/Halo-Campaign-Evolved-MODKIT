#include "BlamNetworkPlayerStateComponent.h"
#include "Net/UnrealNetwork.h"

UBlamNetworkPlayerStateComponent::UBlamNetworkPlayerStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->BlamNetworkInChannelEndpointId = 0;
    this->BlamNetworkOutOfBandEndpointId = 0;
    this->BlamEndpointGeneration = 0;
}

void UBlamNetworkPlayerStateComponent::ServerSetPrimaryPlayerId_Implementation(const FUniqueNetIdRepl& InPrimaryId) {
}

void UBlamNetworkPlayerStateComponent::ServerSetBlamEndpointIds_Implementation(uint16 InChannelEndpointId, uint16 OutOfBandEndpointId, uint8 Generation) {
}

void UBlamNetworkPlayerStateComponent::OnRep_EndpointId(uint16 OldEndpointId) {
}

void UBlamNetworkPlayerStateComponent::OnRep_EndpointGeneration(uint8 OldGeneration) {
}

void UBlamNetworkPlayerStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBlamNetworkPlayerStateComponent, PrimaryPlayerId);
    DOREPLIFETIME(UBlamNetworkPlayerStateComponent, BlamNetworkInChannelEndpointId);
    DOREPLIFETIME(UBlamNetworkPlayerStateComponent, BlamNetworkOutOfBandEndpointId);
    DOREPLIFETIME(UBlamNetworkPlayerStateComponent, BlamEndpointGeneration);
}


