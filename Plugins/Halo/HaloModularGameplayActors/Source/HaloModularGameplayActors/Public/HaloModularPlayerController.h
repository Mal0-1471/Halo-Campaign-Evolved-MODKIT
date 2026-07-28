#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "HaloModularPlayerController.generated.h"

UCLASS(Blueprintable)
class HALOMODULARGAMEPLAYACTORS_API AHaloModularPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    AHaloModularPlayerController(const FObjectInitializer& ObjectInitializer);

};

