#pragma once

#include <windows.h>

/*
dllname:		被劫持dll的原始名字
OrigDllPath:	被劫持dll改名后的完整路径
*/
void SuperDllHijack(LPTSTR dllname, LPTSTR OrigDllPath);

/*
hinstDLL:		劫持dll的实例
OrigDllPath:	被劫持dll的实例
*/
void SuperDllHijack(HINSTANCE hinstDLL, HMODULE hOrigDllMod);