#pragma once
#include "CoreMinimal.h"
#include "Misc/CoreMiscDefines.h"
#include "Engine/GameInstance.h"
#include "OnHaloLogoutRemovingPlayerDelegate.h"
#include "OnSplitScreenPlayerControllerReadyDelegate.h"
#include "HaloOnlineGameInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class HALOONLINEUTILS_API UHaloOnlineGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHaloLogoutRemovingPlayer OnHaloLogoutRemovingPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSplitScreenPlayerControllerReady OnSplitScreenPlayerControllerReady;
    
    UHaloOnlineGameInstance();

    UFUNCTION(BlueprintCallable)
    bool PromoteSplitscreenPlayerToV2(const FPlatformUserId& InPlatformUserId);
    
    UFUNCTION(BlueprintCallable)
    void MsaLogoutPlayer(const FPlatformUserId& UserId);
    
    UFUNCTION(BlueprintCallable)
    void LogoutPlayer(const FPlatformUserId& UserId);
    
    UFUNCTION(BlueprintCallable)
    void LoginSplitScreenPlayer(FPlatformUserId PlatformUserId);
    
    UFUNCTION(BlueprintCallable)
    void LoginDefaultPlayer();
    
    UFUNCTION(BlueprintCallable)
    void AddSplitscreenPlayerAndBroadcast(FPlatformUserId PlatformUserId);
    
};

