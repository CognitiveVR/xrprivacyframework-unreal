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

class XRPrivacyFrameworkAgreement : public IXRPrivacyFrameworkAgreementProvider
{
public:
	XRPrivacyFrameworkAgreement(bool agreementComplete, bool hardwareAllowed,
		bool locationAllowed, bool socialAllowed,
		bool biometricAllowed, bool spatialAllowed);

	virtual bool IsXRPrivacyAgreementComplete() override;
	virtual bool IsHardwareDataAllowed() override;
	virtual bool IsLocationDataAllowed() override;
	virtual bool IsSocialDataAllowed() override;
	virtual bool IsBiometricDataAllowed() override;
	virtual bool IsSpatialDataAllowed() override;
};

class XRPrivacyFrameworkNullAgreement : public IXRPrivacyFrameworkAgreementProvider
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

	FXRPrivacyFrameworkModule();
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	IXRPrivacyFrameworkAgreementProvider* agreement;
};


