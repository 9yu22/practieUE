// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Fountain.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFountain() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AFountain();
	ARENABATTLE_API UClass* Z_Construct_UClass_AFountain_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void AFountain::StaticRegisterNativesAFountain()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFountain);
	UClass* Z_Construct_UClass_AFountain_NoRegister()
	{
		return AFountain::StaticClass();
	}
	struct Z_Construct_UClass_AFountain_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFountain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFountain_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFountain_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Fountain.h" },
		{ "ModuleRelativePath", "Fountain.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFountain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFountain>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFountain_Statics::ClassParams = {
		&AFountain::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFountain_Statics::Class_MetaDataParams), Z_Construct_UClass_AFountain_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFountain()
	{
		if (!Z_Registration_Info_UClass_AFountain.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFountain.OuterSingleton, Z_Construct_UClass_AFountain_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFountain.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<AFountain>()
	{
		return AFountain::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFountain);
	AFountain::~AFountain() {}
	struct Z_CompiledInDeferFile_FID_practiceUE_ArenaBattle_Source_ArenaBattle_Fountain_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_practiceUE_ArenaBattle_Source_ArenaBattle_Fountain_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFountain, AFountain::StaticClass, TEXT("AFountain"), &Z_Registration_Info_UClass_AFountain, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFountain), 420884446U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_practiceUE_ArenaBattle_Source_ArenaBattle_Fountain_h_1233580452(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_practiceUE_ArenaBattle_Source_ArenaBattle_Fountain_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_practiceUE_ArenaBattle_Source_ArenaBattle_Fountain_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS