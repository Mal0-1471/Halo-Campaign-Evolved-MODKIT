#pragma once
#include "CoreMinimal.h"
#include "HaloModularGameModeBase.h"
#include "BlamGameMode.generated.h"

class BLAMENGINE_API AActor;
class BLAMENGINE_API AController;
class BLAMENGINE_API AGameModeBase;

UCLASS(Abstract, Blueprintable, NonTransient)
class BLAMENGINE_API ABlamGameMode : public AHaloModularGameModeBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGameModePlayerInitialized, AGameModeBase*, GAMEMODE, AController*, NewController);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> InsertionPointStartSpot;
    
public:
    ABlamGameMode(const FObjectInitializer& ObjectInitializer);

};

