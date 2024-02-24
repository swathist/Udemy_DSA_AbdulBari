#include <stdio.h>

void fun1(int n)
{
	if(n>0)
	{
		fun1(n-1);
		printf("%d ", n);
	}
	if(n==5)
		printf("\n");
}

void fun2(int n)
{
	if(n>0)
	{
		printf("%d ", n);
		fun2(n-1);
	}
	if(n==0)
		printf("\n");
}

int main()
{
	fun1(5);
	fun2(5);
	return 0;
}
