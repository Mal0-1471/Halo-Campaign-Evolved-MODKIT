#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "HaloAudioExtrudedPortalVisComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HALOAUDIOUNREAL_API UHaloAudioExtrudedPortalVisComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UHaloAudioExtrudedPortalVisComponent(const FObjectInitializer& ObjectInitializer);

};

