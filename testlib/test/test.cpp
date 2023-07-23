#include <stdio.h>
#include <stdlib.h>
#include "../../testlib/testlib/testlib.h"
#pragma comment(lib, "../Debug/testlib.lib")

int main()
{
	printf("请输入两个数字：\n");
	int a, b;
	scanf("%d %d", &a, &b);
	printf("两数之和是：%d\n", add(a, b));
	printf("两数之差是：%d\n", sub(a, b));
	system("pause");
	return 0;
}