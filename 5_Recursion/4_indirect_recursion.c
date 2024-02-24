#include <stdio.h>

void funA(int n);
void funB(int n);

void funA(int n)
{
	if(n > 0)
	{
		printf("%d ",n);
		funB(n-1);
	}
}

void funB(int n)
{
	if(n > 0)
	{
		printf("%d ",n);
		funA(n-1);
	}
}

int main()
{
	funA(5);
	printf("\n");
	funB(5);
	printf("\n");
	return 0;
}
