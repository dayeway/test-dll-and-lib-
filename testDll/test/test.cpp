// test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdlib.h>
#include <Windows.h>
#include "../testDll/testdll.h"
#include <iostream>

#pragma comment(lib, "../Debug/testDll.lib") //��ʽ���ö�̬��,����ʱֻ��Ҫlib,����ʱֻ��Ҫdll

typedef int(pFun)(int, int);

class B : public AA
{

};

int _tmain(int argc, _TCHAR* argv[])
{
	HMODULE hDLL = LoadLibrary(L"../Debug/testDll.dll");//��ʽ���ö�̬�⣬lib\dll����ʱ������Ҫ������ʱֻ��Ҫdll
	if (hDLL == NULL)
	{
		printf("����ʧ�ܣ�\n");
		return 0;
	}
	pFun *pAdd = (pFun *)GetProcAddress(hDLL, "add");
	int a, b;
	scanf("%d %d", &a, &b);
	printf("��ʽ���ö�̬��,����֮��Ϊ��%d\n", pAdd(a, b));
	printf("��ʽ���ö�̬��,����֮��Ϊ��%d\n", add(a, b));//��ʽ���ö�̬��ʱֱ������� 
	
	//printf("��TEST��%d\n", INT(TEST));
	//printf("str1��%s\n", str1);
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

