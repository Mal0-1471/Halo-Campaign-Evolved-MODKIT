#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "HaloUIAsyncContentSubsystem.generated.h"

UCLASS(Blueprintable)
class HALOUI_API UHaloUIAsyncContentSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UHaloUIAsyncContentSubsystem();

};

