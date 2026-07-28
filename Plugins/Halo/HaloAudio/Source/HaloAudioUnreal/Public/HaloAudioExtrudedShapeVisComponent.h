#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "HaloAudioExtrudedShapeVisComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HALOAUDIOUNREAL_API UHaloAudioExtrudedShapeVisComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UHaloAudioExtrudedShapeVisComponent(const FObjectInitializer& ObjectInitializer);

};

