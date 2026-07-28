#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "EItemDataCastResult.h"
#include "HaloUIButtonTextPropertiesOptional.h"
#include "HaloUIMenuItemFilter.h"
#include "HaloUIViewItemInterface.h"
#include "Templates/SubclassOf.h"
#include "HaloUIViewItemData.generated.h"

class UCommonButtonStyle;
class UHaloUIViewItemData;
class UObject;
class UTexture2D;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class HALOUI_API UHaloUIViewItemData : public UPrimaryDataAsset, public IHaloUIViewItemInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FViewItemClicked, const UHaloUIViewItemData*, ItemData);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SubPropertyIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IdentifierName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UserDataInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EntryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EntryDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* EntryDescriptionImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsSelectableOrNavigable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> EntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonStyle> EntryWidgetButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIButtonTextPropertiesOptional NameTextProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIButtonTextPropertiesOptional DescriptionTextProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIMenuItemFilter MenuItemFilter;
    
    UHaloUIViewItemData();

    UFUNCTION(BlueprintCallable)
    static void ReportItemDataCastFailure(const UObject* ItemData, const UClass* RequiredClass, const UObject* ParentWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool PassesFilter(int32 UserIndex, const UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable)
    static void HaloUICastToViewItemData(UObject* SourceItemData, const UObject* ParentWidget, EItemDataCastResult& CastResult, UHaloUIViewItemData*& AsHaloUIViewItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEditorArrayItemName() const;
    
    UFUNCTION(BlueprintCallable)
    void BindClickedDelegate(UHaloUIViewItemData::FViewItemClicked InDelegate);
    

    // Fix for true pure virtual functions not being implemented
};

