#ifndef TESTDLL_H
#define TESTDLL_H

#include <string>
#include <iostream>
//��������ָ��
// �����ô��ַ�ʽ��������ʱ,�ɲ���.def�ļ��ķ�ʽ����
 #ifdef _DLLAPI
 	#define DLLAPI _declspec(dllexport) 
 #else
 	#define DLLAPI _declspec(dllimport) 
 #endif
int sub(int a, int b);

//�����޶���extern "C",����c++��ĵ����������ֲ������ı�,���ӵĻ������������־���"?add@@YAHHH@Z",��̬����ʽ���þͻ�add�������ͻ�������,
//��̬����ʽ���û��Զ���������,����add������
/*extern "C" DLLAPI */int add(int a, int b);
/* DLLAPI */

enum kindType
{
	//TEST,
	TEST1
};


//const std::string str1 = "111";
const std::string str2 = "222";

class /* DLLAPI */AA
{
public:
	DLLAPI void printA();
	int m_a;
};
#endif