#pragma once

#include <windows.h>

/*
dllname:		���ٳ�dll��ԭʼ����
OrigDllPath:	���ٳ�dll�����������·��
*/
void SuperDllHijack(LPTSTR dllname, LPTSTR OrigDllPath);

/*
hinstDLL:		�ٳ�dll��ʵ��
OrigDllPath:	���ٳ�dll��ʵ��
*/
void SuperDllHijack(HINSTANCE hinstDLL, HMODULE hOrigDllMod);