#include "HaloUIManagerSubsystem.h"
#include "Templates/SubclassOf.h"

UHaloUIManagerSubsystem::UHaloUIManagerSubsystem() {
}

void UHaloUIManagerSubsystem::UnparentAllWidgetsInLayerFullscreen(const APlayerController* LocalPlayer, FGameplayTag LayerName) {
}

void UHaloUIManagerSubsystem::UnparentAllWidgetsInLayerForPlayer(const APlayerController* LocalPlayer, FGameplayTag LayerName) {
}

void UHaloUIManagerSubsystem::UnparentAllWidgetsFullscreen(const APlayerController* LocalPlayer) {
}

void UHaloUIManagerSubsystem::UnparentAllWidgetsForPlayer(const APlayerController* LocalPlayer) {
}

void UHaloUIManagerSubsystem::SetPlayerLayout(UHaloUILayoutBase* Layout, const APlayerController* LocalPlayer) {
}

void UHaloUIManagerSubsystem::SetFullscreenPlayerIsActive(const bool bActive) {
}

void UHaloUIManagerSubsystem::SetFullscreenLayout(UHaloUILayoutBase* Layout, APlayerController* LocalPlayer) {
}

void UHaloUIManagerSubsystem::SetCurrentPlayerLayoutPlayer(APlayerController* PlayerController) {
}

void UHaloUIManagerSubsystem::SetCurrentFullscreenPlayer(APlayerController* LocalPlayer) {
}

void UHaloUIManagerSubsystem::PushStreamableContentToLayerFullscreen(const APlayerController* LocalPlayer, FGameplayTag LayerName, TSoftClassPtr<UCommonActivatableWidget> WidgetSoftClass) {
}

void UHaloUIManagerSubsystem::PushStreamableContentToLayerForPlayer(const APlayerController* LocalPlayer, FGameplayTag LayerName, TSoftClassPtr<UCommonActivatableWidget> WidgetSoftClass) {
}

UCommonActivatableWidget* UHaloUIManagerSubsystem::PushContentToLayerFullscreen(const APlayerController* LocalPlayer, FGameplayTag LayerName, TSubclassOf<UCommonActivatableWidget> WidgetSoftClass) {
    return NULL;
}

UCommonActivatableWidget* UHaloUIManagerSubsystem::PushContentToLayerForPlayer(const APlayerController* LocalPlayer, FGameplayTag LayerName, TSubclassOf<UCommonActivatableWidget> WidgetSoftClass) {
    return NULL;
}

void UHaloUIManagerSubsystem::PlatformUserIdChanged(const FPlatformUserId NewPlatformUserId, const FPlatformUserId OldPlatformUserId) {
}

void UHaloUIManagerSubsystem::OpenWidgetFullscreen(FGameplayTag WidgetName, APlayerController* LocalPlayer, UObject* Parameters) const {
}

void UHaloUIManagerSubsystem::OpenWidget(FGameplayTag WidgetName, APlayerController* LocalPlayer, UObject* Parameters) const {
}

void UHaloUIManagerSubsystem::OnClearLayout(UHaloUILayoutBase* Layout) {
}

void UHaloUIManagerSubsystem::OnChangedUIActiveStateCallback(bool bActive) {
}

bool UHaloUIManagerSubsystem::IsWidgetLoadedInLayer(APlayerController* PlayerController, FGameplayTag LayerName, TSoftClassPtr<UCommonActivatableWidget> WidgetClass, bool bOnlyIfActive) const {
    return false;
}

bool UHaloUIManagerSubsystem::IsWidgetLoaded(APlayerController* PlayerController, TSoftClassPtr<UCommonActivatableWidget> WidgetClass, bool bOnlyIfActive) const {
    return false;
}

bool UHaloUIManagerSubsystem::IsUIActiveState() const {
    return false;
}

bool UHaloUIManagerSubsystem::IsPlayerUIActiveState(const APlayerController* PlayerController) const {
    return false;
}

bool UHaloUIManagerSubsystem::IsInputEnabled() const {
    return false;
}

bool UHaloUIManagerSubsystem::IsCurrentFullscreenPlayerValid() const {
    return false;
}

void UHaloUIManagerSubsystem::InvalidateAllWidgets(bool bClearResourcesImmediately) {
}

bool UHaloUIManagerSubsystem::HasValidNonMatchingFullscreenPlayer(const APlayerController* LocalPlayer) const {
    return false;
}

UHaloUILayoutBase* UHaloUIManagerSubsystem::GetPlayerLayout(const APlayerController* LocalPlayer) {
    return NULL;
}

bool UHaloUIManagerSubsystem::GetFullscreenPlayerIsActive() const {
    return false;
}

UHaloUILayoutBase* UHaloUIManagerSubsystem::GetFullscreenLayout(const APlayerController* LocalPlayer) {
    return NULL;
}

FPlatformUserId UHaloUIManagerSubsystem::GetCurrentFullscreenPlayerId() const {
    return FPlatformUserId{};
}

UHaloUILayoutBase* UHaloUIManagerSubsystem::GetContextualLayout(const APlayerController* LocalPlayer, bool& bFullScreen) {
    return NULL;
}

void UHaloUIManagerSubsystem::FindAndRemoveWidgetFullscreen(const APlayerController* LocalPlayer, UCommonActivatableWidget* ActivatableWidget) {
}

void UHaloUIManagerSubsystem::FindAndRemoveWidgetForPlayer(const APlayerController* LocalPlayer, UCommonActivatableWidget* ActivatableWidget) {
}

void UHaloUIManagerSubsystem::FindAndRemoveContextualWidgetForPlayer(const APlayerController* LocalPlayer, UCommonActivatableWidget* ActivatableWidget) {
}

void UHaloUIManagerSubsystem::EnableSplitscreen() {
}

void UHaloUIManagerSubsystem::EnableInput() {
}

void UHaloUIManagerSubsystem::DisableSplitscreen() {
}

void UHaloUIManagerSubsystem::DisableInput() {
}

void UHaloUIManagerSubsystem::CloseWidgetFullscreen(FGameplayTag WidgetName, APlayerController* LocalPlayer) const {
}

void UHaloUIManagerSubsystem::CloseWidget(FGameplayTag WidgetName, APlayerController* LocalPlayer) const {
}

void UHaloUIManagerSubsystem::ClearPlayerLayout(const APlayerController* LocalPlayer) {
}

void UHaloUIManagerSubsystem::ClearLayout(UHaloUILayoutBase* Layout) {
}

void UHaloUIManagerSubsystem::ClearFullscreenLayout(const APlayerController* LocalPlayer) {
}

void UHaloUIManagerSubsystem::ClearCurrentPlayerLayoutPlayer() {
}

void UHaloUIManagerSubsystem::ClearAllLayouts() {
}


