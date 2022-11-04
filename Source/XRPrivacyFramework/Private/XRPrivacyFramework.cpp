// Copyright Epic Games, Inc. All Rights Reserved.
#include "XRPrivacyFramework.h"
#define LOCTEXT_NAMESPACE "FXRPrivacyFrameworkModule"

void FXRPrivacyFrameworkModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FXRPrivacyFrameworkModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

FXRPrivacyFrameworkModule::FXRPrivacyFrameworkModule()
{
	agreement = new XRPrivacyFrameworkNullAgreement();
}

/** XR Privacy Framework Null Agreement: Used when initializing */
#pragma region NullAgreement
XRPrivacyFrameworkNullAgreement::XRPrivacyFrameworkNullAgreement()
{
	privacyAgreementComplete = false;
	hardwareDataAllowed = false;
	locationDataAllowed = false;
	socialDataAllowed = false;
	biometricDataAllowed = false;
	spatialDataAllowed = false;
}

bool XRPrivacyFrameworkNullAgreement::IsXRPrivacyAgreementComplete()
{
	return false;
}

bool XRPrivacyFrameworkNullAgreement::IsHardwareDataAllowed()
{
	return false;
}

bool XRPrivacyFrameworkNullAgreement::IsLocationDataAllowed()
{
	return false;
}

bool XRPrivacyFrameworkNullAgreement::IsSocialDataAllowed()
{
	return false;
}

bool XRPrivacyFrameworkNullAgreement::IsBiometricDataAllowed()
{
	return false;
}

bool XRPrivacyFrameworkNullAgreement::IsSpatialDataAllowed()
{
	return false;
}
#pragma endregion NullAgreement

/** Completed Agreement */
#pragma region Agreement
XRPrivacyFrameworkAgreement::XRPrivacyFrameworkAgreement(bool agreementComplete, bool hardwareAllowed,
	bool locationAllowed, bool socialAllowed,
	bool biometricAllowed, bool spatialAllowed)
{
	privacyAgreementComplete = agreementComplete;
	hardwareDataAllowed = hardwareAllowed;
	locationDataAllowed = locationAllowed;
	socialDataAllowed = socialAllowed;
	biometricDataAllowed = biometricAllowed;
	spatialDataAllowed = spatialAllowed;
}

bool XRPrivacyFrameworkAgreement::IsXRPrivacyAgreementComplete()
{
	return privacyAgreementComplete;
}

bool XRPrivacyFrameworkAgreement::IsHardwareDataAllowed()
{
	return hardwareDataAllowed;
}

bool XRPrivacyFrameworkAgreement::IsLocationDataAllowed()
{
	return locationDataAllowed;
}

bool XRPrivacyFrameworkAgreement::IsSocialDataAllowed()
{
	return socialDataAllowed;
}

bool XRPrivacyFrameworkAgreement::IsBiometricDataAllowed()
{
	return biometricDataAllowed;
}

bool XRPrivacyFrameworkAgreement::IsSpatialDataAllowed()
{
	return spatialDataAllowed;
}
#pragma endregion Agreement



#undef LOCTEXT_NAMESPACE
IMPLEMENT_MODULE(FXRPrivacyFrameworkModule, XRPrivacyFramework)