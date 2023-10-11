#include <windows.h>
#include <vector>
#include <string>

#include "autoassembler.h"

using namespace std;

// 1). 运行CE AA脚本
extern "C" _declspec(dllexport) bool __stdcall AutoAssemble(DWORD processID, char* aa_script, int command)
{
    HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, false, processID);
    if (hProcess == NULL) {
        return false;
    }
    bool retval = _autoassemble(hProcess, string(aa_script), command);
    CloseHandle(hProcess);
    return retval;
}


// 2). 取地址
extern "C" _declspec(dllexport) DWORD __stdcall GetAddress(DWORD processID, char* address_line)
{
    HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, false, processID);
    if (hProcess == NULL) {
        return 0;
    }
    DWORD retval = _getAddressFromAddrExpression(hProcess, string(address_line));
    CloseHandle(hProcess);
    return retval;
}


// 3). 取AA引擎版本号
extern "C" _declspec(dllexport) char* __stdcall Ver()
{
    return (char*)"1.21";
}

// DLL入口点
BOOL APIENTRY DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved)
{
    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
        break;
    case DLL_PROCESS_DETACH:
        break;
    case DLL_THREAD_ATTACH:
        break;
    case DLL_THREAD_DETACH:
        break;
    }
    /* Returns TRUE on success, FALSE on failure */
    return TRUE;
}
