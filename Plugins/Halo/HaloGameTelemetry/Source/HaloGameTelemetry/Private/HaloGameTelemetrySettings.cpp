#include "HaloGameTelemetrySettings.h"

UHaloGameTelemetrySettings::UHaloGameTelemetrySettings() {
    this->bPrintToTextFile = false;
    this->bPrintToLogs = false;
    this->SessionSampleRateSeedOverride = -1.00f;
    this->EventNameListUAssetPath = TEXT("/Game/HaloGameTelemetry/DT_TelemetryEvents.DT_TelemetryEvents");
    this->XBLTitleID = TEXT("2082978535");
    this->TitleName = TEXT("Project Meteorite");
    this->BackendServiceToUse = TEXT("OpenTelemetry");
    this->OneDSEndPoint = TEXT("https://browser.pipe.aria.microsoft.com/OneCollector/1.0");
    this->OTelEndpoint = TEXT("https://collector.onyx.halowaypoint.com/v1/logs");
    this->TelemetryValue1 = TEXT("ec053aad819f414f8b13cbe50aeaa857-3bd2ef79-4ecd-4a8e-ab0e-844856c76a50-7153");
    this->TelemetryValue2 = TEXT("o:ec053aad819f414f8b13cbe50aeaa857");
    this->MatchSamplingRate = 100.00f;
    this->BatchCountThreshold = 100;
    this->BatchBytesThreshold = 10240;
    this->BatchMillisecondsThreshold = 5000;
    this->EnabledEventsNames.AddDefaulted(22);
    this->DisabledEventsNames.AddDefaulted(1);
}


