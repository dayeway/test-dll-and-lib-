#ifndef TESTDLL_H
#define TESTDLL_H

#include <string>
#include <iostream>
//条件编译指令
// 不采用此种方式导出函数时,可采用.def文件的方式导出
 #ifdef _DLLAPI
 	#define DLLAPI _declspec(dllexport) 
 #else
 	#define DLLAPI _declspec(dllimport) 
 #endif
int sub(int a, int b);

//加上限定符extern "C",编译c++后的导出函数名字不发生改变,不加的话导出函数名字就是"?add@@YAHHH@Z",动态库显式调用就会add函数名就会有问题,
//动态库隐式调用会自动处理函数名,调用add无问题
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