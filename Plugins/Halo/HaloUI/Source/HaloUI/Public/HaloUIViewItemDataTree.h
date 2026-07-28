#pragma once
#include "CoreMinimal.h"
#include "EItemDataCastResult.h"
#include "HaloUIViewItemData.h"
#include "HaloUIViewItemDataTree.generated.h"

class UHaloUIViewItemDataTree;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class HALOUI_API UHaloUIViewItemDataTree : public UHaloUIViewItemData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHaloUIViewItemData*> ChildReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHaloUIViewItemData*> ChildInstances;
    
public:
    UHaloUIViewItemDataTree();

    UFUNCTION(BlueprintCallable)
    void SetChildren(TArray<UHaloUIViewItemData*>& NewChildren);
    
    UFUNCTION(BlueprintCallable)
    static void HaloUICastToViewItemDataTree(UObject* SourceItemData, const UObject* ParentWidget, EItemDataCastResult& CastResult, UHaloUIViewItemDataTree*& AsHaloUIViewItemDataTree);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UHaloUIViewItemData*> GetFilteredChildren(int32 UserIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UHaloUIViewItemData*> GetChildren() const;
    
};

