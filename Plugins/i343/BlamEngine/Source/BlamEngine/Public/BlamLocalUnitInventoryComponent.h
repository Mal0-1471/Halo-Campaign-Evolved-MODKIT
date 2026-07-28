#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlamLocalUnitInventoryComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMENGINE_API UBlamLocalUnitInventoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UBlamLocalUnitInventoryComponent(const FObjectInitializer& ObjectInitializer);

};

