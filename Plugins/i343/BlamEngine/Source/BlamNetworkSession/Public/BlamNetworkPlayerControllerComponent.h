#pragma once
#include "CoreMinimal.h"
#include "Components/ControllerComponent.h"
#include "BlamNetworkPlayerControllerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMNETWORKSESSION_API UBlamNetworkPlayerControllerComponent : public UControllerComponent {
    GENERATED_BODY()
public:
    UBlamNetworkPlayerControllerComponent(const FObjectInitializer& ObjectInitializer);

};

