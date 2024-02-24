#include <stdio.h>

float taylor_series_iterative(int x, int n)
{
	int pow=1,fac=1,i=1;
	float ret=1;
	while(i <= n)
	{
		pow=pow*x;
		fac=fac*i;
		printf("%f+(%d/%d)\n",ret,pow,fac);
		ret=((float)pow)/fac+ret;
		i++;
	}
}

int main()
{
	int n,x;
	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Taylor series of val x:%d after n:%d iterations=%f\n", x,n,taylor_series_iterative(x,n));
	return 0;
}
