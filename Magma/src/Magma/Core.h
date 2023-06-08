#pragma once

#ifdef MG_PLATFORM_WINDOWS
	#ifdef MG_BUILD_DLL
		#define MAGMA_API __declspec(dllexport)
	#else
		#define MAGMA_API __declspec(dllimport)
	#endif // MG_BUILD_DLL

#else
	#error Magma only supports Windows!

#endif // MG_PLATFORM_WINDOWS

