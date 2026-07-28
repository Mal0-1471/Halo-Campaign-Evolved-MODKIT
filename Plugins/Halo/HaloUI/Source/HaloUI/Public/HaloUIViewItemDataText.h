#pragma once
#include "CoreMinimal.h"
#include "EItemDataCastResult.h"
#include "HaloUIViewItemData.h"
#include "HaloUIViewItemDataText.generated.h"

class UHaloUIViewItemDataText;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class HALOUI_API UHaloUIViewItemDataText : public UHaloUIViewItemData {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FViewSetterText, UHaloUIViewItemDataText*, ItemData, const FText&, NewValue);
    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(FText, FViewGetterText, const UHaloUIViewItemDataText*, ItemData);
    
    UHaloUIViewItemDataText();

    UFUNCTION(BlueprintCallable)
    void SetValue(const FText& NewValue);
    
    UFUNCTION(BlueprintCallable)
    static void HaloUICastToViewItemDataText(UObject* SourceItemData, const UObject* ParentWidget, EItemDataCastResult& CastResult, UHaloUIViewItemDataText*& AsHaloUIViewItemDataText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetValue() const;
    
    UFUNCTION(BlueprintCallable)
    void BindSetter(UHaloUIViewItemDataText::FViewSetterText NewSetter);
    
    UFUNCTION(BlueprintCallable)
    void BindGetter(UHaloUIViewItemDataText::FViewGetterText NewGetter);
    
};

