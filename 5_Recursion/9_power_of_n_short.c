#include <stdio.h>

int power_of_n_short(int m, int n)
{
	if(n == 0)
		return 1;
	else if(n%2 == 0)
		return power_of_n_short(m*m, n/2);
	else
		return m*power_of_n_short(m*m,(n-1)/2);
}

int main()
{
	int m,n;
	printf("Enter m: ");
	scanf("%d", &m);
	printf("Enter n: ");
	scanf("%d", &n);
	printf("m^n value is: %d\n", power_of_n_short(m,n));
	return 0;
}
