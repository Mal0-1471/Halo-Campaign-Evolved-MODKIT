#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "HaloUIShowSubtitle.h"
#include "HaloUISubtitleModeStyle.h"
#include "HaloUISubtitleSubsystem.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=HaloUI)
class HALOUI_API UHaloUISubtitleSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHaloUIUpdateModeDataDelegate, const FHaloUISubtitleModeStyle&, NewModeData, const FGameplayTag, CurrentMode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHaloUIShowSubtitleDelegate, FHaloUIShowSubtitle, ShowSubtitle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHaloUIGlobalTextSizePercentUpdatedDelegate, const float, Value);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIShowSubtitleDelegate OnShowSubtitle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIUpdateModeDataDelegate OnUpdateModeData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIGlobalTextSizePercentUpdatedDelegate OnGlobalTextSizePercentUpdated;
    
    UHaloUISubtitleSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdateModeData(const FHaloUISubtitleModeStyle& NewModeData, const FGameplayTag Mode);
    
    UFUNCTION(BlueprintCallable)
    void ShowSubtitle(const FHaloUIShowSubtitle& ShowSubtitleData);
    
    UFUNCTION(BlueprintCallable)
    void GlobalTextSizePercentUpdated(const float ShowSubtitleData);
    
};

