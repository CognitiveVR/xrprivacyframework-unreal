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
	UFUNCTION(BlueprintCallable, Category = "XR Privacy Framework")
		static void CreatePrivacyFramework();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "XR Privacy Framework")
		static void CreateXRPrivacyFrameworkAgreement(bool agreementComplete, bool hardwareAllowed,
			bool locationAllowed, bool socialAllowed,
			bool biometricAllowed, bool spatialAllowed);
	UFUNCTION(BlueprintPure, Category = "XR Privacy Framework")
		static bool IsXRPrivacyAgreementComplete();
	UFUNCTION(BlueprintPure, Category = "XR Privacy Framework")
		static bool IsHardwareDataAllowed();
	UFUNCTION(BlueprintPure, Category = "XR Privacy Framework")
		static bool IsLocationDataAllowed();
	UFUNCTION(BlueprintPure, Category = "XR Privacy Framework")
		static bool IsSpatialDataAllowed();
	UFUNCTION(BlueprintPure, Category = "XR Privacy Framework")
		static bool IsSocialDataAllowed();
	UFUNCTION(BlueprintPure, Category = "XR Privacy Framework")
		static bool IsBiometricDataAllowed();
	UFUNCTION(BlueprintPure, Category = "XR Privacy Framework")
		static bool DoesXRPFExist();
	UFUNCTION(BlueprintPure, Category = "XR Privacy Framework")
		static bool DoesAgreementExist();
	UFUNCTION(BlueprintCallable, Category = "XR Privacy Framework")
		static void EndAgreement();

};
