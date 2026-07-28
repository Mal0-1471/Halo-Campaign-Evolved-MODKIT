#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FilePath -FallbackName=FilePath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BlamScenarioPlayerAppearanceCustomization.h"
#include "CampaignMetagameScenario.h"
#include "DataLayerSelector.h"
#include "EScenarioTypeEnum.h"
#include "EquipmentSpawnInfluence.h"
#include "GameGlobalsPlayerRepresentation.h"
#include "ProjectileSpawnInfluence.h"
#include "ScenarioCinematicReference.h"
#include "ScenarioCutsceneTitle.h"
#include "ScenarioFlags.h"
#include "ScenarioInsertionPoint.h"
#include "ScenarioSoftCeiling.h"
#include "ScenarioStructureBspReference.h"
#include "ScenarioStructureDesignReference.h"
#include "ScenarioZoneSet.h"
#include "VehicleSpawnInfluence.h"
#include "WeaponSpawnInfluence.h"
#include "BlamScenario.generated.h"

class BLAMENGINE_API UBlamAiMissionDialogueTagDataAsset;
class BLAMENGINE_API UBlamAirstrikeTagDataAsset;
class BLAMENGINE_API UBlamChudDefinitionTagDataAsset;
class BLAMENGINE_API UBlamEncounterRemixTagDataAsset;
class BLAMENGINE_API UBlamGamePerformanceThrottleTagDataAsset;
class BLAMENGINE_API UBlamLocationNameGlobalsDefinitionTagDataAsset;
class BLAMENGINE_API UBlamMultilingualUnicodeStringListTagDataAsset;
class BLAMENGINE_API UBlamMultiplayerObjectTypeListTagDataAsset;
class BLAMENGINE_API UBlamPerformanceThrottlesTagDataAsset;
class BLAMENGINE_API UBlamScenarioInterpolatorTagDataAsset;
class BLAMENGINE_API UBlamScenarioRequiredResourceTagDataAsset;
class BLAMENGINE_API UBlamStyleTagDataAsset;
class BLAMENGINE_API UScenarioInsertionPointAsset;
class BLAMENGINE_API UScenarioUserInterfaceObjectiveAsset;

UCLASS(Blueprintable)
class BLAMENGINE_API ABlamScenario : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ScenarioName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataLayerSelector ScenarioDataLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFilePath> ScenarioScripts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeActorsNotInLayers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EScenarioTypeEnum Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScenarioFlags Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CampaignId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MAPNAME;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 SoundPermutationMissionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocalNorth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocalSeaLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AltitudeCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3f SandboxOriginPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SandboxBudget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultVehicleSet;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamScenarioPlayerAppearanceCustomization PlayerAppearanceCustomizations[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamGamePerformanceThrottleTagDataAsset> GamePerformanceThrottles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamMultiplayerObjectTypeListTagDataAsset> MultiplayerObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamAirstrikeTagDataAsset> AirStrike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UBlamStyleTagDataAsset>> AiStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamAiMissionDialogueTagDataAsset> MissionDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScenarioCutsceneTitle> CutsceneChapterTitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamMultilingualUnicodeStringListTagDataAsset> ChapterTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamMultilingualUnicodeStringListTagDataAsset> Subtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamMultilingualUnicodeStringListTagDataAsset> Objectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScenarioUserInterfaceObjectiveAsset* UserInterfaceObjectivesDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamScenarioInterpolatorTagDataAsset> Interpolators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamPerformanceThrottlesTagDataAsset> PerformanceThrottles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameGlobalsPlayerRepresentation> OverridePlayerRepresentations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamLocationNameGlobalsDefinitionTagDataAsset> LocationNameGlobals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamChudDefinitionTagDataAsset> ChudReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamScenarioRequiredResourceTagDataAsset> RequiredResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignMetagameScenario CampaignMetagame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScenarioSoftCeiling> SoftCeilings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScenarioInsertionPointAsset* InsertionPointsDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScenarioInsertionPoint> InsertionPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponSpawnInfluence> WeaponSpawnInfluencers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVehicleSpawnInfluence> VehicleSpawnInfluencers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProjectileSpawnInfluence> ProjectileSpawnInfluencers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEquipmentSpawnInfluence> EquipmentSpawnInfluencers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString StructureSeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FScenarioStructureBspReference> StructureBsps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FScenarioStructureDesignReference> StructureDesigns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FScenarioZoneSet> ZoneSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScenarioCinematicReference> Cinematics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamEncounterRemixTagDataAsset> EncounterRemix;
    
    ABlamScenario(const FObjectInitializer& ObjectInitializer);

};

