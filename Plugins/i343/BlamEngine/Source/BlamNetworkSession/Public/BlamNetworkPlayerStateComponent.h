#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "Components/PlayerStateComponent.h"
#include "BlamNetworkPlayerStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMNETWORKSESSION_API UBlamNetworkPlayerStateComponent : public UPlayerStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PrimaryPlayerId;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_EndpointId, meta=(AllowPrivateAccess=true))
    uint16 BlamNetworkInChannelEndpointId;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_EndpointId, meta=(AllowPrivateAccess=true))
    uint16 BlamNetworkOutOfBandEndpointId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EndpointGeneration, meta=(AllowPrivateAccess=true))
    uint8 BlamEndpointGeneration;
    
public:
    UBlamNetworkPlayerStateComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetPrimaryPlayerId(const FUniqueNetIdRepl& InPrimaryId);
    
    UFUNCTION(Reliable, Server)
    void ServerSetBlamEndpointIds(uint16 InChannelEndpointId, uint16 OutOfBandEndpointId, uint8 Generation);
    
private:
    UFUNCTION()
    void OnRep_EndpointId(uint16 OldEndpointId);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EndpointGeneration(uint8 OldGeneration);
    
};

