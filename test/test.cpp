#include<stdio.h>

#include"fun.h"

int fun1(int a1, int b1)
{
	int c = 0;
	c = a1+b1;
	return c;
}
int fun2(int a2, int b2)
{
	int c2 = 0;
	c2 = a2+b2;
	return c2;
}

int main()
{
	int a = 1;
	int b = 2;
	printf("fun1=%d\n",fun1(a,b));
	return 0;
}
