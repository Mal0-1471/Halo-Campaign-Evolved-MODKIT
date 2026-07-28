#pragma once
#include "CoreMinimal.h"
#include "EItemDataCastResult.h"
#include "HaloUIButtonTextPropertiesOptional.h"
#include "HaloUIViewItemDataFloat.h"
#include "Templates/SubclassOf.h"
#include "HaloUIViewItemDataSlider.generated.h"

class UHaloUINumericTextBlockStyle;
class UHaloUISliderStyle;
class UHaloUIViewItemDataSlider;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class HALOUI_API UHaloUIViewItemDataSlider : public UHaloUIViewItemDataFloat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHaloUISliderStyle> SliderStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHaloUINumericTextBlockStyle> NumericTextBlockStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIButtonTextPropertiesOptional ButtonTextPropertiesOptional;
    
public:
    UHaloUIViewItemDataSlider();

    UFUNCTION(BlueprintCallable)
    void SetSliderStyle(TSubclassOf<UHaloUISliderStyle> NewSliderStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetNumericTextBlockStyle(TSubclassOf<UHaloUINumericTextBlockStyle> NewNumericTextBlockStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonTextPropertiesOptional(const FHaloUIButtonTextPropertiesOptional& NewButtonTextPropertiesOptional);
    
    UFUNCTION(BlueprintCallable)
    static void HaloUICastToViewItemDataSlider(UObject* SourceItemData, const UObject* ParentWidget, EItemDataCastResult& CastResult, UHaloUIViewItemDataSlider*& AsHaloUIViewItemDataSlider);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UHaloUISliderStyle> GetSliderStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UHaloUINumericTextBlockStyle> GetNumericTextBlockStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHaloUIButtonTextPropertiesOptional GetButtonTextPropertiesOptional() const;
    
};

