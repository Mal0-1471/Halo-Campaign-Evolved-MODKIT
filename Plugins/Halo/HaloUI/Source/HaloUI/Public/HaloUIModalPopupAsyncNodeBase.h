#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "EHaloUIDialogButtonSelection.h"
#include "EHaloUIModalPopupResult.h"
#include "HaloUIModalPopupCreatedSignatureDelegate.h"
#include "HaloUIModalPopupResultSignatureDelegate.h"
#include "HaloUIModalPopupAsyncNodeBase.generated.h"

class UHaloUIModalAlertPopupWidget;
class UHaloUIModalDialogPopupWidget;
class UHaloUIModalInProgressWidget;
class UHaloUIModalPopupAsyncNodeBase;
class UHaloUIModalPopupWidgetBase;
class UHaloUIPopupInitData;
class ULocalPlayer;
class UObject;

UCLASS(Blueprintable)
class HALOUI_API UHaloUIModalPopupAsyncNodeBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIModalPopupResultSignature OnResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHaloUIModalPopupWidgetBase* ResultingWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULocalPlayer* TargetLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloUIPopupInitData* PopupInitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHaloUIModalPopupResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBeenActivated;
    
public:
    UHaloUIModalPopupAsyncNodeBase();

    UFUNCTION(BlueprintCallable)
    bool HasResult() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleHaloUIModalPopupResult(EHaloUIModalPopupResult InPopupResult, UHaloUIModalPopupWidgetBase* PopupWidget);
    
    UFUNCTION(BlueprintCallable)
    EHaloUIModalPopupResult GetResult() const;
    
private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static UHaloUIModalPopupAsyncNodeBase* CreatePopupWidgetByType(TSoftClassPtr<UHaloUIModalPopupWidgetBase> PopupClass, FGameplayTag PopupLayer, UObject* InWorldContextObject, FText Title, FText Message, const FHaloUIModalPopupCreatedSignature& OnWidgetCreated, bool ShouldBeHighPriority, FText Button1Text, FText Button2Text, FText Button3Text, FText Button4Text, int32 DefaultButtonIdx, EHaloUIDialogButtonSelection BackoutButtonIdx);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    void CreatePopupWidget(TSoftClassPtr<UHaloUIModalPopupWidgetBase> PopupClass, FGameplayTag PopupLayer, UObject* InWorldContextObject, FText Title, FText Message, const FHaloUIModalPopupCreatedSignature& OnWidgetCreated, bool ShouldBeHighPriority, FText Button1Text, FText Button2Text, FText Button3Text, FText Button4Text, int32 DefaultButtonIdx, EHaloUIDialogButtonSelection BackoutButtonIdx);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="InWorldContextObject"))
    static UHaloUIModalPopupAsyncNodeBase* CreateHaloUIPopupByInitDataWithTargetPlayer(UObject* InWorldContextObject, FGameplayTag PopupLayer, UHaloUIPopupInitData* InitData, ULocalPlayer* NewTargetLocalPlayer, const FHaloUIModalPopupCreatedSignature& OnWidgetCreated);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="InWorldContextObject"))
    static UHaloUIModalPopupAsyncNodeBase* CreateHaloUIPopupByInitData(UObject* InWorldContextObject, FGameplayTag PopupLayer, UHaloUIPopupInitData* InitData, const FHaloUIModalPopupCreatedSignature& OnWidgetCreated);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="InWorldContextObject"))
    static UHaloUIModalPopupAsyncNodeBase* CreateHaloUIInProgressWidget(TSoftClassPtr<UHaloUIModalInProgressWidget> InProgressClass, FGameplayTag PopupLayer, UObject* InWorldContextObject, FText Title, FText Message, const FHaloUIModalPopupCreatedSignature& OnWidgetCreated);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="InWorldContextObject"))
    static UHaloUIModalPopupAsyncNodeBase* CreateHaloUIDialogWidget(TSoftClassPtr<UHaloUIModalDialogPopupWidget> DialogClass, FGameplayTag PopupLayer, UObject* InWorldContextObject, FText Title, FText Message, const FHaloUIModalPopupCreatedSignature& OnWidgetCreated, FText Button1Text, FText Button2Text, FText Button3Text, FText Button4Text, int32 DefaultButtonIdx, EHaloUIDialogButtonSelection BackoutButtonIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="InWorldContextObject"))
    static UHaloUIModalPopupAsyncNodeBase* CreateHaloUIAlertWidget(TSoftClassPtr<UHaloUIModalAlertPopupWidget> AlertClass, FGameplayTag PopupLayer, UObject* InWorldContextObject, FText Title, FText Message, const FHaloUIModalPopupCreatedSignature& OnWidgetCreated, bool ShouldBeHighPriority);
    
};

