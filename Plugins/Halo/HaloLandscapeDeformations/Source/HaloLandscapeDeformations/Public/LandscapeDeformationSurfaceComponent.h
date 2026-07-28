#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LandscapeDeformationSurfaceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HALOLANDSCAPEDEFORMATIONS_API ULandscapeDeformationSurfaceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    ULandscapeDeformationSurfaceComponent(const FObjectInitializer& ObjectInitializer);

};

