#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlamGameStateObjectDebugDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamGameStateObjectDebugDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UBlamGameStateObjectDebugDataComponent(const FObjectInitializer& ObjectInitializer);

};

