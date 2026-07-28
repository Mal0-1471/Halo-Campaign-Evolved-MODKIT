#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "GameplayTagContainer.h"
#include "OnUserSettingUpdatedDelegate.h"
#include "OnUserSettingsBulkUpdatedDelegate.h"
#include "HaloUserSettings.generated.h"

UCLASS(Abstract, Blueprintable, Config=Engine)
class HALOUSERSETTINGS_API UHaloUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FOnSettingsOperationCompleted);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HaloUserSettingsVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HaloUserSettingsSubVersion;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstTimeUser;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstTimeUserDevice;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserSettingUpdated OnUserSettingUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserSettingsBulkUpdated OnUserSettingBulkUpdateBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserSettingsBulkUpdated OnUserSettingBulkUpdateEnd;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> SettingsValueMap;
    
public:
    UHaloUserSettings();

    UFUNCTION(BlueprintCallable)
    void SetStringValueFromTag(FGameplayTag SettingTag, const FString& NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStringValueFromName(const FName& PropertyName, const FString& NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalUserIndex(int32 InLocalUserIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetIntValueFromTag(FGameplayTag SettingTag, int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIntValueFromName(const FName& PropertyName, int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatValueFromTag(FGameplayTag SettingTag, float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatValueFromName(const FName& PropertyName, float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDoubleValueFromTag(FGameplayTag SettingTag, double NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDoubleValueFromName(const FName& PropertyName, double NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCategoryToDefaults(FGameplayTag SettingCategory);
    
    UFUNCTION(BlueprintCallable)
    void SaveHaloUserSettings(UHaloUserSettings::FOnSettingsOperationCompleted OnCompleted);
    
    UFUNCTION(BlueprintCallable)
    void LoadHaloUserSettings(UHaloUserSettings::FOnSettingsOperationCompleted OnCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStringValueFromTag(FGameplayTag SettingTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStringValueFromName(const FName& PropertyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocalUserIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFirstTimeUserDevice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFirstTimeUser() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIntValueFromTag(FGameplayTag SettingTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIntValueFromName(const FName& PropertyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloatValueFromTag(FGameplayTag SettingTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloatValueFromName(const FName& PropertyName) const;
    
    UFUNCTION(BlueprintPure)
    double GetDoubleValueFromTag(FGameplayTag SettingTag) const;
    
    UFUNCTION(BlueprintPure)
    double GetDoubleValueFromName(const FName& PropertyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAnySettingsChanged() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyHaloUserSettings();
    
};

