#include<stdio.h>

int fun3(int n)
{
	if(n>0)
	{
		return fun3(n-1)+n;
	}
}

int fun4(int n)
{
	static int x;
	if(n>0)
	{
		x++;
		return fun4(n-1)+x;
	}
}

int main()
{
	printf("fun3: %d\n",fun3(5));
	printf("fun4: %d\n",fun4(5));
	return 0;
}
