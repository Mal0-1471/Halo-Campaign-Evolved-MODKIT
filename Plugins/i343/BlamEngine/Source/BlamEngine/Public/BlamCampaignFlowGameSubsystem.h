#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BlamScenarioGameOptions.h"
#include "BlamCampaignFlowGameSubsystem.generated.h"

class UBlamCampaignDataAsset;

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamCampaignFlowGameSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBlamCampaignDataAsset* CurrentCampaign;
    
    UBlamCampaignFlowGameSubsystem();

    UFUNCTION(BlueprintCallable)
    bool SetAndBeginCampaign(const UBlamCampaignDataAsset* Campaign, const FName StartingScenarioName, const FBlamScenarioGameOptions& Options);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveCampaign(const UBlamCampaignDataAsset* Campaign);
    
    UFUNCTION(BlueprintCallable)
    void RevertToLastSave();
    
    UFUNCTION(BlueprintCallable)
    void RestartLevel();
    
    UFUNCTION(BlueprintCallable)
    void LeaveGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetLastBlamErrorName() const;
    
    UFUNCTION(BlueprintCallable)
    void EndCampaign();
    
    UFUNCTION(BlueprintCallable)
    bool BeginCampaign(const FName StartingScenarioName, const FBlamScenarioGameOptions& Options);
    
    UFUNCTION(BlueprintCallable)
    void AcknowledgeLastBlamError();
    
};

