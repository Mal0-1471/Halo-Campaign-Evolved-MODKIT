// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UObject/Interface.h"
#include "SettingsItemDataExtension.generated.h"

//class UMeteoriteGameUserSettings;

UINTERFACE(Blueprintable)
class USettingsItemDataExtension : public UInterface {
    GENERATED_BODY()
};

class ISettingsItemDataExtension : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetUserIndex(int32 UserIndex);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasAnyRequiredSettings() const;

    //UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    //UMeteoriteGameUserSettings* GetUserSettingsBP() const;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetRequiredSettingNames() const;

};