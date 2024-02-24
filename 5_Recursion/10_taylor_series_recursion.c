#include <stdio.h>

/*
 * Taylor Series: 1+(x/1!)+(x^2/2!)+(x^3/!3)+(x^4/4!)+(x^5/5!)+.......+ n terms
 */

float taylor_series(int x, int n)
{
	static int pow=1, fac=1;
	static float ret=1;
	if(n==0)
		return 1;
	else
	{
		ret=taylor_series(x,n-1);
		pow *= x;
		fac *= n;
		printf("%f+(%d/%d)\n",ret,pow,fac);
		return ret+(((float)pow)/fac);
	}
}

int main()
{
	int n,x;
	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Taylor series of val x:%d after n:%d iterations=%f\n", x,n,taylor_series(x,n));
}
