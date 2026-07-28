#pragma once
#include "CoreMinimal.h"
#include "Components/PlayerStateComponent.h"
#include "BlamExperiencePlayerStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMEXPERIENCE_API UBlamExperiencePlayerStateComponent : public UPlayerStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bHasFinishedBlamMapLoad, meta=(AllowPrivateAccess=true))
    uint8 bHasFinishedBlamMapLoad: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bHasFinishedHaloActorPooling, meta=(AllowPrivateAccess=true))
    uint8 bHasFinishedHaloActorPooling: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bHasFinishedProcessingPsoCache, meta=(AllowPrivateAccess=true))
    uint8 bHasFinishedProcessingPsoCache: 1;
    
public:
    UBlamExperiencePlayerStateComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerMarkHasFinishedProcessingPsoCache();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerMarkHasFinishedHaloActorPooling();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerMarkFinishedBlamMapLoad();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bHasFinishedProcessingPsoCache();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bHasFinishedHaloActorPooling();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bHasFinishedBlamMapLoad();
    
};

