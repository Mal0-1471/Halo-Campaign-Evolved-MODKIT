#pragma once
#include "CoreMinimal.h"
#include "Misc/CoreMiscDefines.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "HaloUIManagerSubsystem.generated.h"

class APlayerController;
class UCommonActivatableWidget;
class UHaloUILayoutBase;
class UObject;

UCLASS(Blueprintable)
class HALOUI_API UHaloUIManagerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIActiveState, bool, bActive);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerUIActiveState, APlayerController*, PlayerController, bool, bActive);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOpenWidgetFullscreen, FGameplayTag, WidgetName, APlayerController*, PlayerController, UObject*, Parameters);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOpenWidget, FGameplayTag, WidgetName, APlayerController*, PlayerController, UObject*, Parameters);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInputEnabledChanged, bool, IsEnabled);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FExitedBehavior, FGameplayTag, OldBehavior);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnteredBehavior, FGameplayTag, NewBehavior);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCloseWidgetFullscreen, FGameplayTag, WidgetName, APlayerController*, PlayerController);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCloseWidget, FGameplayTag, WidgetName, APlayerController*, PlayerController);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputEnabledChanged OnInputEnabledChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnteredBehavior OnEnteredBehavior;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExitedBehavior OnExitedBehavior;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenWidget DoOpenWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCloseWidget DoCloseWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenWidgetFullscreen DoOpenWidgetFullscreen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCloseWidgetFullscreen DoCloseWidgetFullscreen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIActiveState OnChangedUIActiveState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerUIActiveState OnChangedPlayerUIActiveState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, UHaloUILayoutBase*> PlayerHaloUILayouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHaloUILayoutBase> FullScreenHaloUILayout;
    
public:
    UHaloUIManagerSubsystem();

    UFUNCTION(BlueprintCallable)
    static void UnparentAllWidgetsInLayerFullscreen(const APlayerController* LocalPlayer, FGameplayTag LayerName);
    
    UFUNCTION(BlueprintCallable)
    static void UnparentAllWidgetsInLayerForPlayer(const APlayerController* LocalPlayer, FGameplayTag LayerName);
    
    UFUNCTION(BlueprintCallable)
    static void UnparentAllWidgetsFullscreen(const APlayerController* LocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    static void UnparentAllWidgetsForPlayer(const APlayerController* LocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerLayout(UHaloUILayoutBase* Layout, const APlayerController* LocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SetFullscreenPlayerIsActive(const bool bActive);
    
    UFUNCTION(BlueprintCallable)
    static void SetFullscreenLayout(UHaloUILayoutBase* Layout, APlayerController* LocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentPlayerLayoutPlayer(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentFullscreenPlayer(APlayerController* LocalPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PushStreamableContentToLayerFullscreen(const APlayerController* LocalPlayer, FGameplayTag LayerName, TSoftClassPtr<UCommonActivatableWidget> WidgetSoftClass);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PushStreamableContentToLayerForPlayer(const APlayerController* LocalPlayer, FGameplayTag LayerName, TSoftClassPtr<UCommonActivatableWidget> WidgetSoftClass);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UCommonActivatableWidget* PushContentToLayerFullscreen(const APlayerController* LocalPlayer, FGameplayTag LayerName, TSubclassOf<UCommonActivatableWidget> WidgetSoftClass);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UCommonActivatableWidget* PushContentToLayerForPlayer(const APlayerController* LocalPlayer, FGameplayTag LayerName, TSubclassOf<UCommonActivatableWidget> WidgetSoftClass);
    
    UFUNCTION(BlueprintCallable)
    void PlatformUserIdChanged(const FPlatformUserId NewPlatformUserId, const FPlatformUserId OldPlatformUserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OpenWidgetFullscreen(FGameplayTag WidgetName, APlayerController* LocalPlayer, UObject* Parameters) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OpenWidget(FGameplayTag WidgetName, APlayerController* LocalPlayer, UObject* Parameters) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnClearLayout(UHaloUILayoutBase* Layout);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnChangedUIActiveStateCallback(bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWidgetLoadedInLayer(APlayerController* PlayerController, FGameplayTag LayerName, TSoftClassPtr<UCommonActivatableWidget> WidgetClass, bool bOnlyIfActive) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWidgetLoaded(APlayerController* PlayerController, TSoftClassPtr<UCommonActivatableWidget> WidgetClass, bool bOnlyIfActive) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUIActiveState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerUIActiveState(const APlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentFullscreenPlayerValid() const;
    
    UFUNCTION(BlueprintCallable)
    static void InvalidateAllWidgets(bool bClearResourcesImmediately);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidNonMatchingFullscreenPlayer(const APlayerController* LocalPlayer) const;
    
    UFUNCTION(BlueprintCallable)
    static UHaloUILayoutBase* GetPlayerLayout(const APlayerController* LocalPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFullscreenPlayerIsActive() const;
    
    UFUNCTION(BlueprintCallable)
    static UHaloUILayoutBase* GetFullscreenLayout(const APlayerController* LocalPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlatformUserId GetCurrentFullscreenPlayerId() const;
    
    UFUNCTION(BlueprintCallable)
    static UHaloUILayoutBase* GetContextualLayout(const APlayerController* LocalPlayer, bool& bFullScreen);
    
    UFUNCTION(BlueprintCallable)
    static void FindAndRemoveWidgetFullscreen(const APlayerController* LocalPlayer, UCommonActivatableWidget* ActivatableWidget);
    
    UFUNCTION(BlueprintCallable)
    static void FindAndRemoveWidgetForPlayer(const APlayerController* LocalPlayer, UCommonActivatableWidget* ActivatableWidget);
    
    UFUNCTION(BlueprintCallable)
    static void FindAndRemoveContextualWidgetForPlayer(const APlayerController* LocalPlayer, UCommonActivatableWidget* ActivatableWidget);
    
    UFUNCTION(BlueprintCallable)
    void EnableSplitscreen();
    
    UFUNCTION(BlueprintCallable)
    void EnableInput();
    
    UFUNCTION(BlueprintCallable)
    void DisableSplitscreen();
    
    UFUNCTION(BlueprintCallable)
    void DisableInput();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CloseWidgetFullscreen(FGameplayTag WidgetName, APlayerController* LocalPlayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CloseWidget(FGameplayTag WidgetName, APlayerController* LocalPlayer) const;
    
    UFUNCTION(BlueprintCallable)
    static void ClearPlayerLayout(const APlayerController* LocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    static void ClearLayout(UHaloUILayoutBase* Layout);
    
    UFUNCTION(BlueprintCallable)
    static void ClearFullscreenLayout(const APlayerController* LocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentPlayerLayoutPlayer();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllLayouts();
    
};

