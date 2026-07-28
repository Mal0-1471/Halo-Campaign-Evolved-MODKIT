#pragma once
#include "CoreMinimal.h"
#include "ESessionLeaveReason.h"
#include "HaloModularPlayerController.h"
#include "BlamPlayerController.generated.h"

class BLAMENGINE_API AActor;

UCLASS(Blueprintable)
class BLAMENGINE_API ABlamPlayerController : public AHaloModularPlayerController {
    GENERATED_BODY()
public:
    ABlamPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnUnitChanged(AActor* PreviousPlayerActor, AActor* NewPlayerActor);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetPendingSessionLeaveReason(ESessionLeaveReason Reason);
    
};

