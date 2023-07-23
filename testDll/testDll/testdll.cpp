#include "testdll.h"

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

void AA::printA()
{
	std::cout << m_a << std::endl;
}