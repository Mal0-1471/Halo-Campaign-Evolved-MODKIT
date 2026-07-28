#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "BlamIncidentHandlerLocalPlayerSubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class BLAMENGINE_API UBlamIncidentHandlerLocalPlayerSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UBlamIncidentHandlerLocalPlayerSubsystem();

};

