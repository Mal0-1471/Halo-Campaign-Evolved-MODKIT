#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlamObjectComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamObjectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UBlamObjectComponent(const FObjectInitializer& ObjectInitializer);

};

