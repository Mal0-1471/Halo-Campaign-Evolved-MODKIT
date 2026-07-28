#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BlamIncidentHandlerLocalPlayerSubsystem.h"
#include "OnProgressionIncidentDelegate.h"
#include "BlamProgressLocalPlayerSubsystem.generated.h"

class BLAMENGINE_API UBlamProgressLocalPlayerSaveGame;

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamProgressLocalPlayerSubsystem : public UBlamIncidentHandlerLocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProgressionIncident OnProgressionIncident;
    
    UBlamProgressLocalPlayerSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UpdateNotifiedGameplayTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBlamProgressLocalPlayerSaveGame* TryAndGetSaveGame() const;
    
    UFUNCTION(BlueprintCallable)
    void InjectProgressGameplayTag(const FGameplayTag& ProgressGameplayTag);
    
};

