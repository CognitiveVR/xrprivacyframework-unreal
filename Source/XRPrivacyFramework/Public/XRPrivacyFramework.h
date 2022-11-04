// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class IXRPrivacyFrameworkAgreementProvider
{
public:
	virtual bool IsXRPrivacyFrameworkAgreementComplete() = 0;
	virtual bool IsHardwareDataAllowed() = 0;
	virtual bool IsLocationDataAllowed() = 0;
	virtual bool IsSocialDataAllowed() = 0;
	virtual bool IsBiometricDataAllowed() = 0;
	virtual bool IsSpatialDataAllowed() = 0;
};

class FXRPrivacyFrameworkModule : public IModuleInterface, IXRPrivacyFrameworkAgreementProvider
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	/** IXRPrivacyFrameworkAgreementProvider implementation */
	virtual bool IsXRPrivacyFrameworkAgreementComplete() override;
	virtual bool IsHardwareDataAllowed() override;
	virtual bool IsLocationDataAllowed() override;
	virtual bool IsSocialDataAllowed() override;
	virtual bool IsBiometricDataAllowed() override;
	virtual bool IsSpatialDataAllowed() override;
};