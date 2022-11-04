/*
	
*/
#pragma once

#include "XRPrivacyFramework.h"
#include "CoreMinimal.h"
#include "XRPrivacyFrameworkBlueprints.generated.h"

UCLASS()
class XRPRIVACYFRAMEWORK_API UXRPrivacyFrameworkBlueprints : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	//UFUNCTION(BlueprintCallable, Category = "CognitiveVR Analytics|Custom Events")
		//static UCustomEvent* SetFloatProperty(UCustomEvent* target, FString key, float floatValue);
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject", CallableWithoutWorldContext, AdvancedDisplay = "2"), Category = "CognitiveVR Analytics|Debug")
		static bool HasNetworkError();
	UFUNCTION(BlueprintPure, Category = "CognitiveVR Analytics")
		static FString GetAttributionParameters();
};
