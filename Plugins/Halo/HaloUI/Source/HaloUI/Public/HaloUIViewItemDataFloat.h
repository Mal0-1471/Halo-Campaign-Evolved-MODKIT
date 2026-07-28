#pragma once
#include "CoreMinimal.h"
#include "EItemDataCastResult.h"
#include "HaloUIViewItemData.h"
#include "HaloUIViewItemDataFloat.generated.h"

class UHaloUIViewItemDataFloat;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class HALOUI_API UHaloUIViewItemDataFloat : public UHaloUIViewItemData {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FViewSetterFloat, UHaloUIViewItemDataFloat*, ItemData, float, NewValue);
    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(float, FViewGetterFloat, const UHaloUIViewItemDataFloat*, ItemData);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBackingRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinBackingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBackingValue;
    
public:
    UHaloUIViewItemDataFloat();

    UFUNCTION(BlueprintCallable)
    void SetValue(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetUseBackingRange(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStep(float NewStep);
    
    UFUNCTION(BlueprintCallable)
    void SetMinBackingValue(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMin(float NewMin);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxBackingValue(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMax(float NewMax);
    
    UFUNCTION(BlueprintCallable)
    static void HaloUICastToViewItemDataFloat(UObject* SourceItemData, const UObject* ParentWidget, EItemDataCastResult& CastResult, UHaloUIViewItemDataFloat*& AsHaloUIViewItemDataFloat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseBackingRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinBackingValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxBackingValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMax() const;
    
    UFUNCTION(BlueprintCallable)
    void BindSetter(UHaloUIViewItemDataFloat::FViewSetterFloat NewSetter);
    
    UFUNCTION(BlueprintCallable)
    void BindGetter(UHaloUIViewItemDataFloat::FViewGetterFloat NewGetter);
    
};

