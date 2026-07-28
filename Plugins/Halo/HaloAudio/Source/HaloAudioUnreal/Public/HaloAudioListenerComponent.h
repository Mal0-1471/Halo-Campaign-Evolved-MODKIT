#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HaloAudioListenerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HALOAUDIOUNREAL_API UHaloAudioListenerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UHaloAudioListenerComponent(const FObjectInitializer& ObjectInitializer);

};

