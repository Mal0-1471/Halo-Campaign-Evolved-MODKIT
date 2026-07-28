#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "HaloModularPawn.generated.h"

UCLASS(Blueprintable)
class HALOMODULARGAMEPLAYACTORS_API AHaloModularPawn : public APawn {
    GENERATED_BODY()
public:
    AHaloModularPawn(const FObjectInitializer& ObjectInitializer);

};

