#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "BlamMarkerProperties.h"
#include "BlamMarkerExportSettingsObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BLAMSYNCHRONIZATION_API UBlamMarkerExportSettingsObject : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlamMarkerProperties> Markers;
    
    UBlamMarkerExportSettingsObject();

};

