#include "pch.h"
#include "MT4DllTester.h"
#include <codecvt>

MT4_EXPFUNC const WCHAR* __stdcall TestFunction(WCHAR* input)
{
	std::wstring_convert<std::codecvt_utf8<wchar_t>, wchar_t> cv;

	std::wstring w_inp(input);
	std::string s_out = cv.to_bytes(w_inp);

	s_out.append("::from DLL");

	std::wstring w_out = cv.from_bytes(s_out);

	const WCHAR* ret = w_out.c_str();
	return ret;
}
