#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HaloUINarrationTextureDataTable.generated.h"

class UHaloUINarrationTextureData;

UCLASS(Blueprintable, EditInlineNew)
class HALOUI_API UHaloUINarrationTextureDataTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHaloUINarrationTextureData*> NarrationTextureDatas;
    
    UHaloUINarrationTextureDataTable();

};

