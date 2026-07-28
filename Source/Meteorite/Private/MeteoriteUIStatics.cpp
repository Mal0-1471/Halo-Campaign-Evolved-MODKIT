// Fill out your copyright notice in the Description page of Project Settings.


#include "MeteoriteUIStatics.h"

UMeteoriteUIStatics::UMeteoriteUIStatics() {
}

APlayerController* UMeteoriteUIStatics::TryAndGetLocalPlayerControllerForBlamObjectActor(ABlamObjectActor* InBlamActor) {
    return NULL;
}

void UMeteoriteUIStatics::ShowStore(APlayerController* PlayerController, FName EntitlementName) {
}

void UMeteoriteUIStatics::SetPlatformMouseCursorEnabled(const int32 LocalUserIndex, const bool bEnabled) {
}

void UMeteoriteUIStatics::SetEquippedObjectSkin(APlayerController* PlayerController, FGameplayTag SkinName) {
}

void UMeteoriteUIStatics::SetDifficultyModifiersEnabled(bool bEnabled) {
}

void UMeteoriteUIStatics::SaveEquippedSkinSelections(APlayerController* PlayerController, FOnMeteoriteCustomizationsSaveCompleted OnSaveCompleted) {
}

void UMeteoriteUIStatics::ResumeRemixSave(APlayerController* PlayerController) {
}

void UMeteoriteUIStatics::ResumeDLCSave(APlayerController* PlayerController) {
}

void UMeteoriteUIStatics::ResumeCampaignSave(APlayerController* PlayerController) {
}

void UMeteoriteUIStatics::RequestWaypointEntitlements(APlayerController* PlayerController) {
}

bool UMeteoriteUIStatics::IsWaypointEntitlement(UObject* WorldContextObject, FName EntitlementName) {
    return false;
}

bool UMeteoriteUIStatics::IsShippingBuild() {
    return false;
}

bool UMeteoriteUIStatics::IsReadyForGameplay(APlayerState* PlayerState) {
    return false;
}

bool UMeteoriteUIStatics::IsPurchasableEntitlement(UObject* WorldContextObject, FName EntitlementName) {
    return false;
}

bool UMeteoriteUIStatics::IsProgressionGameplayTagPresent(APlayerController* PlayerController, FGameplayTag ProgressionTag) {
    return false;
}

bool UMeteoriteUIStatics::IsMissionLocked(APlayerController* PlayerController, const FBlamScenarioDataTableRow& ScenarioRow)
{
    return false;
}

bool UMeteoriteUIStatics::IsInsertionPointLocked(APlayerController* PlayerController, const FBlamScenarioDataTableRow& ScenarioRow, int32 InsertionPointIndex)
{
    return false;
}

bool UMeteoriteUIStatics::IsInGameplayState(const UObject* WorldContextObject) {
    return false;
}

bool UMeteoriteUIStatics::IsHDRSupportedAndAllowed() {
    return false;
}

bool UMeteoriteUIStatics::IsDLCPurchased(APlayerController* PlayerController, FName EntitlementName) {
    return false;
}

bool UMeteoriteUIStatics::HasValidCurrentSavedGameIndex(APlayerController* PlayerController) {
    return false;
}

FPlatformUserId UMeteoriteUIStatics::GetPlatformUserIdFromLocalUserIndex(int32 LocalUserIndex) {
    return FPlatformUserId{};
}

EBlamGameModeSaveSlot UMeteoriteUIStatics::GetLastSavedGameMode(APlayerController* PlayerController) {
    return EBlamGameModeSaveSlot::Campaign;
}

FGameplayTag UMeteoriteUIStatics::GetEquippedObjectSkin(APlayerController* PlayerController, FGameplayTag ObjectOrSkinName) {
    return FGameplayTag{};
}

bool UMeteoriteUIStatics::GetDifficultyModifiersEnabled() {
    return false;
}

FString UMeteoriteUIStatics::GetBuildDateString() {
    return TEXT("");
}

FString UMeteoriteUIStatics::GetBuildChangelist() {
    return TEXT("");
}

bool UMeteoriteUIStatics::Debug_IsTerminalLocked(FName TerminalName) {
    return false;
}

bool UMeteoriteUIStatics::Debug_IsSkullLocked(EBlamGameSkulls GameSkull)
{
    return false;
}

int32 UMeteoriteUIStatics::CompareFText(FText TextA, FText TextB) {
    return 0;
}

void UMeteoriteUIStatics::CheckAndNotifyForCrossplayPrivileges(APlayerController* PlayerController) {
}

bool UMeteoriteUIStatics::CanResumeSaveSlot(APlayerController* PlayerController, EBlamGameModeSaveSlot SaveSlot) {
    return false;
}

bool UMeteoriteUIStatics::CanResumeRemixSave(APlayerController* PlayerController) {
    return false;
}

bool UMeteoriteUIStatics::CanResumeDLCSave(APlayerController* PlayerController) {
    return false;
}

bool UMeteoriteUIStatics::CanResumeCampaignSave(APlayerController* PlayerController) {
    return false;
}