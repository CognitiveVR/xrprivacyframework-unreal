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

bool FXRPrivacyFrameworkModule::IsXRPrivacyFrameworkAgreementComplete()
{
	return false;
}

bool FXRPrivacyFrameworkModule::IsHardwareDataAllowed()
{
	return false;
}

bool FXRPrivacyFrameworkModule::IsLocationDataAllowed()
{
	return false;
}

bool FXRPrivacyFrameworkModule::IsSocialDataAllowed()
{
	return false;
}

bool FXRPrivacyFrameworkModule::IsBiometricDataAllowed()
{
	return false;
}

bool FXRPrivacyFrameworkModule::IsSpatialDataAllowed()
{
	return false;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FXRPrivacyFrameworkModule, XRPrivacyFramework)