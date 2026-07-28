#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "NTFluxSystem.generated.h"

class AActor;
class ANTFluxSurfaceActor;
class UShapeComponent;

UCLASS(Blueprintable)
class NTLIBS_API UNTFluxSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UNTFluxSystem();

    UFUNCTION(BlueprintCallable)
    ANTFluxSurfaceActor* FindFluxSurfaceForVolume(UShapeComponent* InVolumeComponent);
    
    UFUNCTION(BlueprintCallable)
    ANTFluxSurfaceActor* FindFluxSurfaceForActor(AActor* InActor);
    
};

