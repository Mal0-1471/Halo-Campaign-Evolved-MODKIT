#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "NTFluxBaseActor.generated.h"

class ANTFluxSurfaceActor;

UCLASS(Blueprintable)
class NTLIBS_API ANTFluxBaseActor : public AActor {
    GENERATED_BODY()
public:
    ANTFluxBaseActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UserFluxPostInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UserFluxInitWithSurface(ANTFluxSurfaceActor* SurfaceActor);
    
};

