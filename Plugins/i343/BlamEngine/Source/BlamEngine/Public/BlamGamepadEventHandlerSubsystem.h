#pragma once
#include "CoreMinimal.h"
#include "BlamGameInstanceSubsystem.h"
#include "BlamIncident.h"
#include "BlamGamepadEventHandlerSubsystem.generated.h"

class BLAMENGINE_API UBlamGamepadLightEventDataAsset;

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamGamepadEventHandlerSubsystem : public UBlamGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlamGamepadLightEventDataAsset* LoadedLightEventsDataAsset;
    
public:
    UBlamGamepadEventHandlerSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnBlamIncident(const FBlamIncident& Incident);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddGamepadLightEvent(const int32 LocalPlayerIndex, const FName EventName);
    
};

