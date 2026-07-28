#pragma once
#include "CoreMinimal.h"
#include "HaloUIShowSubtitle.h"
#include "BlamGameInstanceSubsystem.h"
#include "BlamCinematicSubsystem.generated.h"

class ALevelSequenceActor;
class ULevelSequence;

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamCinematicSubsystem : public UBlamGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCinematicInProgress, bool, bInProgress);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCinematicEnd, bool, bWasSkipped);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCinematicBegin, ULevelSequence*, LevelSequence);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCinematicInProgress OnCinematicInProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCinematicBegin OnCinematicBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCinematicEnd OnCinematicEnd;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* LevelSequenceActor;
    
public:
    UBlamCinematicSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnSubtitleShown(FHaloUIShowSubtitle ShowSubtitleData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCinematicInProgress() const;
    
};

