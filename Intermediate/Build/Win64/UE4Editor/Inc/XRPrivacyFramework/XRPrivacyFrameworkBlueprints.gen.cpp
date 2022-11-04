// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XRPrivacyFramework/Public/XRPrivacyFrameworkBlueprints.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRPrivacyFrameworkBlueprints() {}
// Cross Module References
	XRPRIVACYFRAMEWORK_API UClass* Z_Construct_UClass_UXRPrivacyFrameworkBlueprints_NoRegister();
	XRPRIVACYFRAMEWORK_API UClass* Z_Construct_UClass_UXRPrivacyFrameworkBlueprints();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_XRPrivacyFramework();
// End Cross Module References
	DEFINE_FUNCTION(UXRPrivacyFrameworkBlueprints::execGetAttributionParameters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UXRPrivacyFrameworkBlueprints::GetAttributionParameters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRPrivacyFrameworkBlueprints::execHasNetworkError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UXRPrivacyFrameworkBlueprints::HasNetworkError();
		P_NATIVE_END;
	}
	void UXRPrivacyFrameworkBlueprints::StaticRegisterNativesUXRPrivacyFrameworkBlueprints()
	{
		UClass* Class = UXRPrivacyFrameworkBlueprints::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttributionParameters", &UXRPrivacyFrameworkBlueprints::execGetAttributionParameters },
			{ "HasNetworkError", &UXRPrivacyFrameworkBlueprints::execHasNetworkError },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_GetAttributionParameters_Statics
	{
		struct XRPrivacyFrameworkBlueprints_eventGetAttributionParameters_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_GetAttributionParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XRPrivacyFrameworkBlueprints_eventGetAttributionParameters_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_GetAttributionParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_GetAttributionParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_GetAttributionParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "CognitiveVR Analytics" },
		{ "ModuleRelativePath", "Public/XRPrivacyFrameworkBlueprints.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_GetAttributionParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRPrivacyFrameworkBlueprints, nullptr, "GetAttributionParameters", nullptr, nullptr, sizeof(XRPrivacyFrameworkBlueprints_eventGetAttributionParameters_Parms), Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_GetAttributionParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_GetAttributionParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_GetAttributionParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_GetAttributionParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_GetAttributionParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_GetAttributionParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_HasNetworkError_Statics
	{
		struct XRPrivacyFrameworkBlueprints_eventHasNetworkError_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_HasNetworkError_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XRPrivacyFrameworkBlueprints_eventHasNetworkError_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_HasNetworkError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XRPrivacyFrameworkBlueprints_eventHasNetworkError_Parms), &Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_HasNetworkError_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_HasNetworkError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_HasNetworkError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_HasNetworkError_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "CognitiveVR Analytics|Debug" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"CognitiveVR Analytics|Custom Events\")\n//static UCustomEvent* SetFloatProperty(UCustomEvent* target, FString key, float floatValue);\n" },
		{ "ModuleRelativePath", "Public/XRPrivacyFrameworkBlueprints.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"CognitiveVR Analytics|Custom Events\")\nstatic UCustomEvent* SetFloatProperty(UCustomEvent* target, FString key, float floatValue);" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_HasNetworkError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRPrivacyFrameworkBlueprints, nullptr, "HasNetworkError", nullptr, nullptr, sizeof(XRPrivacyFrameworkBlueprints_eventHasNetworkError_Parms), Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_HasNetworkError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_HasNetworkError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_HasNetworkError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_HasNetworkError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_HasNetworkError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_HasNetworkError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXRPrivacyFrameworkBlueprints_NoRegister()
	{
		return UXRPrivacyFrameworkBlueprints::StaticClass();
	}
	struct Z_Construct_UClass_UXRPrivacyFrameworkBlueprints_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRPrivacyFrameworkBlueprints_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_XRPrivacyFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXRPrivacyFrameworkBlueprints_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_GetAttributionParameters, "GetAttributionParameters" }, // 2456759258
		{ &Z_Construct_UFunction_UXRPrivacyFrameworkBlueprints_HasNetworkError, "HasNetworkError" }, // 2085123557
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRPrivacyFrameworkBlueprints_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "XRPrivacyFrameworkBlueprints.h" },
		{ "ModuleRelativePath", "Public/XRPrivacyFrameworkBlueprints.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRPrivacyFrameworkBlueprints_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRPrivacyFrameworkBlueprints>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXRPrivacyFrameworkBlueprints_Statics::ClassParams = {
		&UXRPrivacyFrameworkBlueprints::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UXRPrivacyFrameworkBlueprints_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRPrivacyFrameworkBlueprints_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRPrivacyFrameworkBlueprints()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXRPrivacyFrameworkBlueprints_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXRPrivacyFrameworkBlueprints, 716661608);
	template<> XRPRIVACYFRAMEWORK_API UClass* StaticClass<UXRPrivacyFrameworkBlueprints>()
	{
		return UXRPrivacyFrameworkBlueprints::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXRPrivacyFrameworkBlueprints(Z_Construct_UClass_UXRPrivacyFrameworkBlueprints, &UXRPrivacyFrameworkBlueprints::StaticClass, TEXT("/Script/XRPrivacyFramework"), TEXT("UXRPrivacyFrameworkBlueprints"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRPrivacyFrameworkBlueprints);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
