#pragma once

#ifdef NOCTURN_PLATFORM_WINDOWS
	#ifdef NOCTURN_BUILD_DLL
		#define NOCTURN_API __declspec(dllexport)
	#else
		#define NOCTURN_API __declspec(dllimport)
	#endif
#else
	#error Nocturn only supports Windows!
#endif