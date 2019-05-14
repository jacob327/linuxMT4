// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the MT4DLLTESTER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// MT4DLLTESTER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.

//#ifdef MT4DLLTESTER_EXPORTS
//#define MT4DLLTESTER_API __declspec(dllexport)
//#else
//#define MT4DLLTESTER_API __declspec(dllimport)
//#endif
//
//// This class is exported from the dll
//class MT4DLLTESTER_API CMT4DllTester {
//public:
//	CMT4DllTester(void);
//	// TODO: add your methods here.
//};
//
//extern MT4DLLTESTER_API int nMT4DllTester;
//
//MT4DLLTESTER_API int fnMT4DllTester(void);
#pragma once
#define MT4_EXPFUNC __declspec(dllexport)

