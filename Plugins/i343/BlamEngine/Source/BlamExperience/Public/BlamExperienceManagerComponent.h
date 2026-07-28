#pragma once
#include "CoreMinimal.h"
#include "Components/GameStateComponent.h"
#include "BlamExperienceManagerComponent.generated.h"

class UBlamExperienceDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMEXPERIENCE_API UBlamExperienceManagerComponent : public UGameStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentExperience, meta=(AllowPrivateAccess=true))
    UBlamExperienceDefinition* CurrentExperience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bWaitingForAllInitialPlayersToLoadLevel, meta=(AllowPrivateAccess=true))
    uint8 bWaitingForAllInitialPlayersToLoadLevel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bWaitingForAllInitialPlayersToBeReadyForGameplay, meta=(AllowPrivateAccess=true))
    uint8 bWaitingForAllInitialPlayersToBeReadyForGameplay: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bWaitingForBlamGameplayStart, meta=(AllowPrivateAccess=true))
    uint8 bWaitingForBlamGameplayStart: 1;
    
public:
    UBlamExperienceManagerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentExperience();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bWaitingForBlamGameplayStart();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bWaitingForAllInitialPlayersToLoadLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bWaitingForAllInitialPlayersToBeReadyForGameplay();
    
};

