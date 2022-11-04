// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class IXRPrivacyFrameworkAgreementProvider
{
public:
	bool privacyAgreementComplete;
	bool hardwareDataAllowed;
	bool locationDataAllowed;
	bool socialDataAllowed;
	bool biometricDataAllowed;
	bool spatialDataAllowed;

	virtual bool IsXRPrivacyAgreementComplete() = 0;
	virtual bool IsHardwareDataAllowed() = 0;
	virtual bool IsLocationDataAllowed() = 0;
	virtual bool IsSocialDataAllowed() = 0;
	virtual bool IsBiometricDataAllowed() = 0;
	virtual bool IsSpatialDataAllowed() = 0;
};

class XRPrivacyFrameworkAgreement : IXRPrivacyFrameworkAgreementProvider
{
public:
	XRPrivacyFrameworkAgreement(bool agreementComplete, bool hardwareDataAllowed,
		bool locationDataAllowed, bool socialDataAllowed,
		bool biometricDataAllowed, bool spatialDataAllowed);

	virtual bool IsXRPrivacyAgreementComplete() override;
	virtual bool IsHardwareDataAllowed() override;
	virtual bool IsLocationDataAllowed() override;
	virtual bool IsSocialDataAllowed() override;
	virtual bool IsBiometricDataAllowed() override;
	virtual bool IsSpatialDataAllowed() override;
};

class XRPrivacyFrameworkNullAgreement : IXRPrivacyFrameworkAgreementProvider
{
public:
	XRPrivacyFrameworkNullAgreement();

	virtual bool IsXRPrivacyAgreementComplete() override;
	virtual bool IsHardwareDataAllowed() override;
	virtual bool IsLocationDataAllowed() override;
	virtual bool IsSocialDataAllowed() override;
	virtual bool IsBiometricDataAllowed() override;
	virtual bool IsSpatialDataAllowed() override;
};

class FXRPrivacyFrameworkModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	IXRPrivacyFrameworkAgreementProvider* agreement;
};


