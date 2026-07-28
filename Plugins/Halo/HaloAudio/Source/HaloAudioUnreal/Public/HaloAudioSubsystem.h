#pragma once
#include "CoreMinimal.h"
#include "Subsystems/Subsystem.h"
#include "HaloAudioSubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class HALOAUDIOUNREAL_API UHaloAudioSubsystem : public USubsystem {
    GENERATED_BODY()
public:
    UHaloAudioSubsystem();

};

