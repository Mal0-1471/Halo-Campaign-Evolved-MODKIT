#pragma once
#include "CoreMinimal.h"
#include "Components/GameStateComponent.h"
#include "BlamNetworkGameStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMNETWORKSESSION_API UBlamNetworkGameStateComponent : public UGameStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bSessionRunning, meta=(AllowPrivateAccess=true))
    bool bSessionRunning;
    
public:
    UBlamNetworkGameStateComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_bSessionRunning(bool bOldSessionRunning);
    
};

