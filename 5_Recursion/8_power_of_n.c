#include <stdio.h>

int power_of_n(int m, int n)
{
	if(n > 0)
	{
		return m*power_of_n(m,n-1);
	}
	else if(n < 0)
		return 0;
	else
		return 1;
}

int main()
{
	int m,n;
	printf("Enter m: ");
	scanf("%d", &m);
	printf("Enter n: ");
	scanf("%d", &n);
	printf("m^n value is: %d\n", power_of_n(m,n));
	return 0;
}
