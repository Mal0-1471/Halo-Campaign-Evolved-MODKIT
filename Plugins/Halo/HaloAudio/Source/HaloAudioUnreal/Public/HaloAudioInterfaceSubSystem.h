#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "HaloAudioInterfaceSubSystem.generated.h"

UCLASS(Blueprintable)
class HALOAUDIOUNREAL_API UHaloAudioInterfaceSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UHaloAudioInterfaceSubSystem();

};

