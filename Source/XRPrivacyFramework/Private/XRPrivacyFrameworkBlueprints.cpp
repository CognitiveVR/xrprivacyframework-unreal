/*
	
*/
#include "XRPrivacyFrameworkBlueprints.h"
//#include "Private/CognitiveVRPrivatePCH.h"

bool UXRPrivacyFrameworkBlueprints::HasNetworkError()
{
	FXRPrivacyFrameworkModule& LocalXRPrivacyFramework = FModuleManager::GetModuleChecked<FXRPrivacyFrameworkModule>(TEXT("XRPrivacyFramework"));
	//LocalXRPrivacyFramework.agreement->
	return false;
}

FString UXRPrivacyFrameworkBlueprints::GetAttributionParameters()
{
	return FString();
}


//UCustomEvent* UCognitiveVRBlueprints::SetFloatProperty(UCustomEvent* target, FString key, float floatValue)
//{
//	target->SetProperty(key, floatValue);
//	return target;
//}



