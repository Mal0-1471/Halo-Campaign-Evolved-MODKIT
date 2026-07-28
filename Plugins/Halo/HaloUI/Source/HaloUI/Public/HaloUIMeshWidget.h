#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "HaloUIMeshWidget.generated.h"

class USlateVectorArtData;

UCLASS(Blueprintable)
class UHaloUIMeshWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateVectorArtData* MeshData;
    
    UHaloUIMeshWidget();

};

