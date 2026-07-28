#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "BlamScenarioGameOptions.h"
#include "BlamEngineLoadingManagerEngineSubsystem.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamEngineLoadingManagerEngineSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLoadStartedEvent_BP);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLoadFailedEvent_BP);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLoadCompletedEvent_BP);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadStartedEvent_BP OnLoadStarted_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadCompletedEvent_BP OnLoadCompleted_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadFailedEvent_BP OnLoadFailed_BP;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TOptional<FBlamScenarioGameOptions> ScenarioToLoadGameOptions;
    
public:
    UBlamEngineLoadingManagerEngineSubsystem();

};

