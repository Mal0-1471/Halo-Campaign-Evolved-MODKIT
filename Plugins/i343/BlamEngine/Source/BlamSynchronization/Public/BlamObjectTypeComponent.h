#pragma once
#include "CoreMinimal.h"
#include "BlamObjectComponent.h"
#include "BlamObjectTypeComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamObjectTypeComponent : public UBlamObjectComponent {
    GENERATED_BODY()
public:
    UBlamObjectTypeComponent(const FObjectInitializer& ObjectInitializer);

};

