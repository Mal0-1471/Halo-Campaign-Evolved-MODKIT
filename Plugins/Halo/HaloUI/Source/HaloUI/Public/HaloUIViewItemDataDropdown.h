#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EItemDataCastResult.h"
#include "HaloUIButtonTextPropertiesOptional.h"
#include "HaloUIViewItemDataInteger.h"
#include "Templates/SubclassOf.h"
#include "HaloUIViewItemDataDropdown.generated.h"

class UCommonBorderStyle;
class UCommonButtonStyle;
class UHaloUIViewItemData;
class UHaloUIViewItemDataDropdown;
class UObject;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class HALOUI_API UHaloUIViewItemDataDropdown : public UHaloUIViewItemDataInteger {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIButtonTextPropertiesOptional HeaderNameTextProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> ListEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonStyle> ListEntryButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonBorderStyle> ListBorderStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHaloUIViewItemData*> ChildReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHaloUIViewItemData*> ChildInstances;
    
public:
    UHaloUIViewItemDataDropdown();

    UFUNCTION(BlueprintCallable)
    void SetChildren(const TArray<UHaloUIViewItemData*>& NewChildren);
    
    UFUNCTION(BlueprintCallable)
    static void HaloUICastToViewItemDataDropdown(UObject* SourceItemData, const UObject* ParentWidget, EItemDataCastResult& CastResult, UHaloUIViewItemDataDropdown*& AsHaloUIViewItemDataDropdown);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UHaloUIViewItemData*> GetChildren() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHaloUIViewItemData* GetChild(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHaloUIViewItemData* FindChildItem(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindChildIndex(const FGameplayTag& Tag) const;
    
};

