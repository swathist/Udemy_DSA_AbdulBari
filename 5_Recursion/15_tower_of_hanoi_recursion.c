#include <stdio.h>

void tower_of_hanoi(int n, int a, int b, int c)
{
	if(n>0)
	{
		tower_of_hanoi(n-1, a, c, b);
		printf("Move %d to %d\n", a, c);
		tower_of_hanoi(n-1, b, a, c);
	}
}

int main()
{
	int n,a=1,b=2,c=3;
	printf("Enter n: ");
	scanf("%d",&n);
	tower_of_hanoi(n,a,b,c);
}
