#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "HaloPhysicalMaterialToGameplayTagRow.generated.h"

class BLAMENGINE_API UPhysicalMaterial;

USTRUCT(BlueprintType)
struct BLAMENGINE_API FHaloPhysicalMaterialToGameplayTagRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPhysicalMaterial> Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
     FHaloPhysicalMaterialToGameplayTagRow();
};

