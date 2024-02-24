#include <stdio.h>

int sum_of_natural(int n)
{
	if(n > 0)
		return n + sum_of_natural(n-1);
	return 0;
}

int main()
{
	int n;
	printf("Enter number: ");
	scanf("%d", &n);
	printf("Sum: %d\n", sum_of_natural(n));
	return 0;
}
