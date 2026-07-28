#include "HaloAudioMusicNetworkChannel.h"
#include "Net/UnrealNetwork.h"

AHaloAudioMusicNetworkChannel::AHaloAudioMusicNetworkChannel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
}

void AHaloAudioMusicNetworkChannel::OnRep_UpdateSwitch(const TArray<FHaloAudioMusicClientSwitch>& OldClientSwitches) {
}

void AHaloAudioMusicNetworkChannel::OnRep_UpdateState(const TArray<FHaloAudioMusicClientState>& OldClientStates) {
}

void AHaloAudioMusicNetworkChannel::OnRep_UpdateRtpc(const TArray<FHaloAudioMusicClientRtpc>& OldClientRtpcs) {
}

void AHaloAudioMusicNetworkChannel::OnRep_UpdatePlayingState() {
}

void AHaloAudioMusicNetworkChannel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHaloAudioMusicNetworkChannel, ClientPlayingState);
    DOREPLIFETIME(AHaloAudioMusicNetworkChannel, ClientStates);
    DOREPLIFETIME(AHaloAudioMusicNetworkChannel, ClientSwitches);
    DOREPLIFETIME(AHaloAudioMusicNetworkChannel, ClientRtpcs);
}


