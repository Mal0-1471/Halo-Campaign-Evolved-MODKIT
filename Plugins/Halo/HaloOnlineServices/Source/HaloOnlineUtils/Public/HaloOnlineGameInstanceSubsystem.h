#pragma once
#include "CoreMinimal.h"
#include "Misc/CoreMiscDefines.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "HaloOnlineGameInstanceSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UHaloOnlineGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UHaloOnlineGameInstanceSubsystem();

    UFUNCTION(BlueprintCallable)
    void NavigateToMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void LogoutSplitscreenPlayer(const FPlatformUserId& UserId, bool bNavigateToMainMenu);
    
    UFUNCTION(BlueprintCallable)
    void LogoutPrimaryPlayer(const FPlatformUserId& UserId, bool bDestroySession);
    
};

