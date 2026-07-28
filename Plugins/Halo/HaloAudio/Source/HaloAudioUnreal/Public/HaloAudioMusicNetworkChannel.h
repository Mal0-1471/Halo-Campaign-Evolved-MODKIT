#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "HaloAudioMusicClientPlayingState.h"
#include "HaloAudioMusicClientRtpc.h"
#include "HaloAudioMusicClientState.h"
#include "HaloAudioMusicClientSwitch.h"
#include "HaloAudioMusicNetworkChannel.generated.h"

UCLASS(Blueprintable)
class HALOAUDIOUNREAL_API AHaloAudioMusicNetworkChannel : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpdatePlayingState, meta=(AllowPrivateAccess=true))
    FHaloAudioMusicClientPlayingState ClientPlayingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpdateState, meta=(AllowPrivateAccess=true))
    TArray<FHaloAudioMusicClientState> ClientStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpdateSwitch, meta=(AllowPrivateAccess=true))
    TArray<FHaloAudioMusicClientSwitch> ClientSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpdateRtpc, meta=(AllowPrivateAccess=true))
    TArray<FHaloAudioMusicClientRtpc> ClientRtpcs;
    
public:
    AHaloAudioMusicNetworkChannel(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdateSwitch(const TArray<FHaloAudioMusicClientSwitch>& OldClientSwitches);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdateState(const TArray<FHaloAudioMusicClientState>& OldClientStates);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdateRtpc(const TArray<FHaloAudioMusicClientRtpc>& OldClientRtpcs);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdatePlayingState();
    
};

