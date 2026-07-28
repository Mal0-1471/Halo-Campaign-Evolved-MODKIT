#pragma once
#include "CoreMinimal.h"
#include "BlamGameInstanceSubsystem.h"
#include "BlamSavedGameGameInstanceSubsystem.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamSavedGameGameInstanceSubsystem : public UBlamGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UBlamSavedGameGameInstanceSubsystem();

};

