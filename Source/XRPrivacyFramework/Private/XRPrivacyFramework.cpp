// Copyright Epic Games, Inc. All Rights Reserved.
#include "XRPrivacyFramework.h"
// #include "XRPrivacyFramework.generated.h"
#define LOCTEXT_NAMESPACE "FXRPrivacyFrameworkModule"

void FXRPrivacyFrameworkModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	agreement = new AXRPrivacyFrameworkNullAgreement();
}

void FXRPrivacyFrameworkModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

FXRPrivacyFrameworkModule::FXRPrivacyFrameworkModule()
{
	StartupModule();
}

FXRPrivacyFrameworkModule::~FXRPrivacyFrameworkModule()
{

}

void FXRPrivacyFrameworkModule::SetAgreement(IXRPrivacyFrameworkAgreementProvider* provider)
{
	agreement = provider;
}

/** XR Privacy Framework Null Agreement: Used when initializing */
#pragma region NullAgreement
AXRPrivacyFrameworkNullAgreement::AXRPrivacyFrameworkNullAgreement()
{
	privacyAgreementComplete = false;
	hardwareDataAllowed = false;
	locationDataAllowed = false;
	socialDataAllowed = false;
	biometricDataAllowed = false;
	spatialDataAllowed = false;
}

bool AXRPrivacyFrameworkNullAgreement::IsXRPrivacyAgreementComplete()
{
	return false;
}

bool AXRPrivacyFrameworkNullAgreement::IsHardwareDataAllowed()
{
	return false;
}

bool AXRPrivacyFrameworkNullAgreement::IsLocationDataAllowed()
{
	return false;
}

bool AXRPrivacyFrameworkNullAgreement::IsSocialDataAllowed()
{
	return false;
}

bool AXRPrivacyFrameworkNullAgreement::IsBiometricDataAllowed()
{
	return false;
}

bool AXRPrivacyFrameworkNullAgreement::IsSpatialDataAllowed()
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