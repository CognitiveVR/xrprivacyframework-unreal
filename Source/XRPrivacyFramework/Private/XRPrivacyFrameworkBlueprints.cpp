/*
	
*/
#include "XRPrivacyFrameworkBlueprints.h"
//#include "Private/CognitiveVRPrivatePCH.h"

void UXRPrivacyFrameworkBlueprints::CreateXRPrivacyFrameworkAgreement(bool agreementComplete, bool hardwareAllowed,
	bool locationAllowed, bool socialAllowed,
	bool biometricAllowed, bool spatialAllowed) 
{
	FXRPrivacyFrameworkModule& LocalXRPrivacyFramework = FModuleManager::GetModuleChecked<FXRPrivacyFrameworkModule>(TEXT("XRPrivacyFramework"));
	IXRPrivacyFrameworkAgreementProvider* currentAgreement = new XRPrivacyFrameworkAgreement(agreementComplete, hardwareAllowed,
		locationAllowed, socialAllowed, biometricAllowed, spatialAllowed);
	LocalXRPrivacyFramework.SetAgreement(currentAgreement);
}

bool UXRPrivacyFrameworkBlueprints::IsXRPrivacyAgreementComplete()
{
	FXRPrivacyFrameworkModule& LocalXRPrivacyFramework = FModuleManager::GetModuleChecked<FXRPrivacyFrameworkModule>(TEXT("XRPrivacyFramework"));
	return LocalXRPrivacyFramework.agreement->IsXRPrivacyAgreementComplete();
}

bool UXRPrivacyFrameworkBlueprints::IsHardwareDataAllowed()
{
	FXRPrivacyFrameworkModule& LocalXRPrivacyFramework = FModuleManager::GetModuleChecked<FXRPrivacyFrameworkModule>(TEXT("XRPrivacyFramework"));
	return LocalXRPrivacyFramework.agreement->IsHardwareDataAllowed();
}

bool UXRPrivacyFrameworkBlueprints::IsLocationDataAllowed()
{
	FXRPrivacyFrameworkModule& LocalXRPrivacyFramework = FModuleManager::GetModuleChecked<FXRPrivacyFrameworkModule>(TEXT("XRPrivacyFramework"));
	return LocalXRPrivacyFramework.agreement->IsLocationDataAllowed();
}

bool UXRPrivacyFrameworkBlueprints::IsSpatialDataAllowed()
{
	FXRPrivacyFrameworkModule& LocalXRPrivacyFramework = FModuleManager::GetModuleChecked<FXRPrivacyFrameworkModule>(TEXT("XRPrivacyFramework"));
	return LocalXRPrivacyFramework.agreement->IsSpatialDataAllowed();
}

bool UXRPrivacyFrameworkBlueprints::IsSocialDataAllowed()
{
	FXRPrivacyFrameworkModule& LocalXRPrivacyFramework = FModuleManager::GetModuleChecked<FXRPrivacyFrameworkModule>(TEXT("XRPrivacyFramework"));
	return LocalXRPrivacyFramework.agreement->IsSocialDataAllowed();
}

bool UXRPrivacyFrameworkBlueprints::IsBiometricDataAllowed()
{
	FXRPrivacyFrameworkModule& LocalXRPrivacyFramework = FModuleManager::GetModuleChecked<FXRPrivacyFrameworkModule>(TEXT("XRPrivacyFramework"));
	return LocalXRPrivacyFramework.agreement->IsBiometricDataAllowed();
}

void UXRPrivacyFrameworkBlueprints::EndAgreement()
{
	FXRPrivacyFrameworkModule& LocalXRPrivacyFramework = FModuleManager::GetModuleChecked<FXRPrivacyFrameworkModule>(TEXT("XRPrivacyFramework"));
	LocalXRPrivacyFramework.End();
}




