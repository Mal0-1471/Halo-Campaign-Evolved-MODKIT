#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "HaloUILocalPlayerSubsystem.generated.h"

UCLASS(Blueprintable)
class HALOUI_API UHaloUILocalPlayerSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UHaloUILocalPlayerSubsystem();

};

