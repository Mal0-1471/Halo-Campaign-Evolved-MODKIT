#pragma once
#include "CoreMinimal.h"
#include "Debug/DebugDrawComponent.h"
#include "BlamDebugMeshComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMENGINE_API UBlamDebugMeshComponent : public UDebugDrawComponent {
    GENERATED_BODY()
public:
    UBlamDebugMeshComponent(const FObjectInitializer& ObjectInitializer);

};

