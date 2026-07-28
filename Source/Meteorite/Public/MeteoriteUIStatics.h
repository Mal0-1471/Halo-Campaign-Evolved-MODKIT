// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "Misc/CoreMiscDefines.h"
#include "EBlamGameSkulls.h"
#include "BlamBuiltInMapInfoDataAsset.h"
#include "MeteoriteUIStatics.generated.h"

UENUM(BlueprintType)
enum class EBlamGameModeSaveSlot : uint8 
{
    Campaign,
    DLC,
    Remix,
    None,
    Count,
};

class ABlamObjectActor;
class APlayerController;
class APlayerState;

UDELEGATE(BlueprintCallable) 
DECLARE_DYNAMIC_DELEGATE(FOnMeteoriteCustomizationsSaveCompleted);

UCLASS()
class METEORITE_API UMeteoriteUIStatics : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:
    UMeteoriteUIStatics();

    UFUNCTION(BlueprintCallable)
    static APlayerController* TryAndGetLocalPlayerControllerForBlamObjectActor(ABlamObjectActor* InBlamActor);

    UFUNCTION(BlueprintCallable)
    static void ShowStore(APlayerController* PlayerController, FName EntitlementName);

    UFUNCTION(BlueprintCallable)
    static void SetPlatformMouseCursorEnabled(const int32 LocalUserIndex, const bool bEnabled);

    UFUNCTION(BlueprintCallable)
    static void SetEquippedObjectSkin(APlayerController* PlayerController, FGameplayTag SkinName);

    UFUNCTION(BlueprintCallable)
    static void SetDifficultyModifiersEnabled(bool bEnabled);

    UFUNCTION(BlueprintCallable)
    static void SaveEquippedSkinSelections(APlayerController* PlayerController, FOnMeteoriteCustomizationsSaveCompleted OnSaveCompleted);

    UFUNCTION(BlueprintCallable)
    static void ResumeRemixSave(APlayerController* PlayerController);

    UFUNCTION(BlueprintCallable)
    static void ResumeDLCSave(APlayerController* PlayerController);

    UFUNCTION(BlueprintCallable)
    static void ResumeCampaignSave(APlayerController* PlayerController);

    UFUNCTION(BlueprintCallable)
    static void RequestWaypointEntitlements(APlayerController* PlayerController);

    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
    static bool IsWaypointEntitlement(UObject* WorldContextObject, FName EntitlementName);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShippingBuild();

    UFUNCTION(BlueprintCallable)
    static bool IsReadyForGameplay(APlayerState* PlayerState);

    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
    static bool IsPurchasableEntitlement(UObject* WorldContextObject, FName EntitlementName);

    UFUNCTION(BlueprintCallable)
    static bool IsProgressionGameplayTagPresent(APlayerController* PlayerController, FGameplayTag ProgressionTag);

    UFUNCTION(BlueprintCallable)
    static bool IsMissionLocked(APlayerController* PlayerController, const FBlamScenarioDataTableRow& ScenarioRow);

    UFUNCTION(BlueprintCallable)
    static bool IsInsertionPointLocked(APlayerController* PlayerController, const FBlamScenarioDataTableRow& ScenarioRow, int32 InsertionPointIndex);

    UFUNCTION(BlueprintCallable, BlueprintPure, meta = (WorldContext = "WorldContextObject"))
    static bool IsInGameplayState(const UObject* WorldContextObject);

    UFUNCTION(BlueprintCallable)
    static bool IsHDRSupportedAndAllowed();

    UFUNCTION(BlueprintCallable)
    static bool IsDLCPurchased(APlayerController* PlayerController, FName EntitlementName);

    UFUNCTION(BlueprintCallable)
    static bool HasValidCurrentSavedGameIndex(APlayerController* PlayerController);

    UFUNCTION(BlueprintCallable)
    static FPlatformUserId GetPlatformUserIdFromLocalUserIndex(int32 LocalUserIndex);

    UFUNCTION(BlueprintCallable)
    static EBlamGameModeSaveSlot GetLastSavedGameMode(APlayerController* PlayerController);

    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetEquippedObjectSkin(APlayerController* PlayerController, FGameplayTag ObjectOrSkinName);

    UFUNCTION(BlueprintCallable)
    static bool GetDifficultyModifiersEnabled();

    UFUNCTION(BlueprintCallable)
    static FString GetBuildDateString();

    UFUNCTION(BlueprintCallable)
    static FString GetBuildChangelist();

    UFUNCTION(BlueprintCallable)
    static bool Debug_IsTerminalLocked(FName TerminalName);

    UFUNCTION(BlueprintCallable)
    static bool Debug_IsSkullLocked(EBlamGameSkulls GameSkull);

    UFUNCTION(BlueprintCallable)
    static int32 CompareFText(FText TextA, FText TextB);

    UFUNCTION(BlueprintCallable)
    static void CheckAndNotifyForCrossplayPrivileges(APlayerController* PlayerController);

    UFUNCTION(BlueprintCallable)
    static bool CanResumeSaveSlot(APlayerController* PlayerController, EBlamGameModeSaveSlot SaveSlot);

    UFUNCTION(BlueprintCallable)
    static bool CanResumeRemixSave(APlayerController* PlayerController);

    UFUNCTION(BlueprintCallable)
    static bool CanResumeDLCSave(APlayerController* PlayerController);

    UFUNCTION(BlueprintCallable)
    static bool CanResumeCampaignSave(APlayerController* PlayerController);
};
