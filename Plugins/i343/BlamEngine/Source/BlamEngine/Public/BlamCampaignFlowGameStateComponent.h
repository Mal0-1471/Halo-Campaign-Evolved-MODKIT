#pragma once
#include "CoreMinimal.h"
#include "Components/GameStateComponent.h"
#include "BlamCampaignFlowGameStateComponent.generated.h"

class UBlamCampaignDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMENGINE_API UBlamCampaignFlowGameStateComponent : public UGameStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveCampaign, meta=(AllowPrivateAccess=true))
    UBlamCampaignDataAsset* ActiveCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsInLASO;
    
public:
    UBlamCampaignFlowGameStateComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveCampaign() const;
    
};

