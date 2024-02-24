#include <stdio.h>

int factorial_of_number(int n)
{
	if(n > 0)
		return n * factorial_of_number(n-1);
	else
		return 1;
}

int main()
{
	int n;
	printf("Enter number: ");
	scanf("%d", &n);
	printf("Factorial: %d\n", factorial_of_number(n));
	return 0;
}
