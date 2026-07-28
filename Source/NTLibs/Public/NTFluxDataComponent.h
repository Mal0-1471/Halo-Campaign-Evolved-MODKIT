#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NTFluxDataComponent.generated.h"

class ANTFluxSurfaceActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NTLIBS_API UNTFluxDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UNTFluxDataComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UserFluxPostInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UserFluxInitWithSurface(ANTFluxSurfaceActor* SurfaceActor);
    
};

