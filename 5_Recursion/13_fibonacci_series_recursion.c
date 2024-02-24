#include <stdio.h>

/*
 * Fibonacci Series: 0 1 1 2 3 5 8 13 21 34 ....
 */

int fibonacci_series(int n)
{
	static int a=0,b=1,temp;
	if(n > 0)
	{
		temp = b;
		printf("%d ", a);
		b = a+b;
		a = temp;
		return fibonacci_series(n-1);
	}
}

int fibonacci_series_nth_term(int n)
{
	if (n <= 1)
		return n;
	else
		return fibonacci_series_nth_term(n-2) + fibonacci_series_nth_term(n-1);
}

int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	fibonacci_series(n);
	printf("\nnth term in fibonacci: %d\n", fibonacci_series_nth_term(n));
}
