#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BlamRenderSettingsChangeData.h"
#include "BlamRenderSettingsManagerGameInstanceSubsystem.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamRenderSettingsManagerGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRenderSettingsChanged, const FBlamRenderSettingsChangeData&, UpdateData);
    
    UBlamRenderSettingsManagerGameInstanceSubsystem();

};

