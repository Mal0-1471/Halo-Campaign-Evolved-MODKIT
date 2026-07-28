#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HaloUIViewItemDataArray.generated.h"

class UHaloUIViewItemData;

UCLASS(Blueprintable, EditInlineNew)
class HALOUI_API UHaloUIViewItemDataArray : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHaloUIViewItemData*> ItemDataArray;
    
    UHaloUIViewItemDataArray();

};

