#include <stdio.h>
#include <stdlib.h>
#include "../../testlib/testlib/testlib.h"
#pragma comment(lib, "../Debug/testlib.lib")

int main()
{
	printf("�������������֣�\n");
	int a, b;
	scanf("%d %d", &a, &b);
	printf("����֮���ǣ�%d\n", add(a, b));
	printf("����֮���ǣ�%d\n", sub(a, b));
	system("pause");
	return 0;
}