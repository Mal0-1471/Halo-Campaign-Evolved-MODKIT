#pragma once
#include "CoreMinimal.h"
#include "EItemDataCastResult.h"
#include "HaloUIViewItemDataText.h"
#include "Templates/SubclassOf.h"
#include "HaloUIViewItemDataTextEntry.generated.h"

class UHaloUITextEntryStyle;
class UHaloUIViewItemDataTextEntry;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class HALOUI_API UHaloUIViewItemDataTextEntry : public UHaloUIViewItemDataText {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHaloUITextEntryStyle> TextEntryStyle;
    
public:
    UHaloUIViewItemDataTextEntry();

    UFUNCTION(BlueprintCallable)
    void SetTextEntryStyle(const TSubclassOf<UHaloUITextEntryStyle>& NewTextEntryStyle);
    
    UFUNCTION(BlueprintCallable)
    static void HaloUICastToViewItemDataTextEntry(UObject* SourceItemData, const UObject* ParentWidget, EItemDataCastResult& CastResult, UHaloUIViewItemDataTextEntry*& AsHaloUIViewItemDataTextEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UHaloUITextEntryStyle> GetTextEntryStyle() const;
    
};

