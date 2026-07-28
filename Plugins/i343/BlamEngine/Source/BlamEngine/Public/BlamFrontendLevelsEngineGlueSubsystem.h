#pragma once
#include "CoreMinimal.h"
//#include "BlamEngineGlueSubsystem.h"
#include "Subsystems/Subsystem.h"
#include "BlamFrontendLevelsEngineGlueSubsystem.generated.h"

class BLAMENGINE_API UBlamBuiltInMapInfoDataAsset;

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamFrontendLevelsEngineGlueSubsystem : public USubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBlamBuiltInMapInfoDataAsset* BuiltInMapInfoData;

};

