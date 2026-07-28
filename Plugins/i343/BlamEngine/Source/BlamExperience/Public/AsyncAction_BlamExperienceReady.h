#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "BlamExperienceReadyAsyncDelegateDelegate.h"
#include "AsyncAction_BlamExperienceReady.generated.h"

class UAsyncAction_BlamExperienceReady;
class UObject;

UCLASS(Blueprintable)
class UAsyncAction_BlamExperienceReady : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamExperienceReadyAsyncDelegate OnReady;
    
    UAsyncAction_BlamExperienceReady();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncAction_BlamExperienceReady* WaitForBlamExperienceReady(UObject* WorldContextObject);
    
};

