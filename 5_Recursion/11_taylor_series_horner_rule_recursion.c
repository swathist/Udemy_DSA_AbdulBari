#include <stdio.h>

float taylor_series_horner(int x, int n)
{
	static float ret=1;
	if(n == 0)
	{
		return ret;
	}
	else
	{
		ret=1+(((float)x)*ret/n);
		printf("ret: %f\n",ret);
		return taylor_series_horner(x,n-1);
	}
}

int main()
{
	int n,x;
	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Taylor series of val x:%d after n:%d iterations=%f\n", x,n,taylor_series_horner(x,n));
	return 0;
}
