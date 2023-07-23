// test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdlib.h>
#include <Windows.h>
#include "../testDll/testdll.h"
#include <iostream>

#pragma comment(lib, "../Debug/testDll.lib") //隐式调用动态库,编译时只需要lib,运行时只需要dll

typedef int(pFun)(int, int);

class B : public AA
{

};

int _tmain(int argc, _TCHAR* argv[])
{
	HMODULE hDLL = LoadLibrary(L"../Debug/testDll.dll");//显式调用动态库，lib\dll编译时都不需要，运行时只需要dll
	if (hDLL == NULL)
	{
		printf("加载失败！\n");
		return 0;
	}
	pFun *pAdd = (pFun *)GetProcAddress(hDLL, "add");
	int a, b;
	scanf("%d %d", &a, &b);
	printf("显式调用动态库,两数之和为：%d\n", pAdd(a, b));
	printf("隐式调用动态库,两数之和为：%d\n", add(a, b));//隐式调用动态库时直接如此用 
	
	//printf("宏TEST：%d\n", INT(TEST));
	//printf("str1：%s\n", str1);
	//std::cout << str1 << std::endl;


	//FreeLibrary(hDLL);

	AA aa;
	aa.m_a = 1;

	aa.printA();

	B bb;
	bb.m_a = 2;
	bb.printA();

	system("pause");

	return 0;
}

