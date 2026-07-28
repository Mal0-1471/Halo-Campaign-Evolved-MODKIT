#pragma once
#include "CoreMinimal.h"
#include "BlamGameInstanceSubsystem.h"
#include "BlamIncident.h"
#include "BlamIncidentSubsystem.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamIncidentSubsystem : public UBlamGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIncident, const FBlamIncident&, Incident);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIncident OnIncident;
    
    UBlamIncidentSubsystem();

};

