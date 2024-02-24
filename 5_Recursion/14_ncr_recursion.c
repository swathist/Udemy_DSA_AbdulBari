#include <stdio.h>

/*
 * ncr: n!/((n-r)! * r!)
 */

int ncr_recursion(int n, int r)
{
	if(r==0 || r==n)
		return 1;
	else
		return ncr_recursion(n-1,r-1) + ncr_recursion(n-1,r);
}

int main()
{
	int n,r;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter r: ");
	scanf("%d", &r);
	printf("ncr: %d!/((%d-%d)! * %d!) = %d\n", n,n,r,r,ncr_recursion(n,r));
	return 0;
}
