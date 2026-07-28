#pragma once
#include "CoreMinimal.h"
#include "HaloOnlineLocalPlayer.h"
#include "BlamIncident.h"
#include "BlamLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class BLAMENGINE_API UBlamLocalPlayer : public UHaloOnlineLocalPlayer {
    GENERATED_BODY()
public:
    UBlamLocalPlayer();

private:
    UFUNCTION(BlueprintCallable)
    void OnIncident(const FBlamIncident& Incident);
    
};

