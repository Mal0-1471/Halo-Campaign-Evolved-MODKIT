#pragma once
#include "CoreMinimal.h"
#include "EItemDataCastResult.h"
#include "HaloUIViewItemData.h"
#include "Templates/SubclassOf.h"
#include "HaloUIViewItemDataInteger.generated.h"

class UCommonButtonStyle;
class UHaloUIViewItemDataInteger;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class HALOUI_API UHaloUIViewItemDataInteger : public UHaloUIViewItemData {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FViewSetterInteger, UHaloUIViewItemDataInteger*, ItemData, int32, NewValue);
    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(int32, FViewGetterInteger, const UHaloUIViewItemDataInteger*, ItemData);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonStyle> SubButtonStyle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxValue;
    
public:
    UHaloUIViewItemDataInteger();

    UFUNCTION(BlueprintCallable)
    void SetValue(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMin(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMax(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    static void HaloUICastToViewItemDataInteger(UObject* SourceItemData, const UObject* ParentWidget, EItemDataCastResult& CastResult, UHaloUIViewItemDataInteger*& AsHaloUIViewItemDataInteger);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMax() const;
    
    UFUNCTION(BlueprintCallable)
    void BindSetter(UHaloUIViewItemDataInteger::FViewSetterInteger NewSetter);
    
    UFUNCTION(BlueprintCallable)
    void BindGetter(UHaloUIViewItemDataInteger::FViewGetterInteger NewGetter);
    
};

