#include <iostream>
#include <stdlib.h>

using namespace std;

int fun1(int  *A,int n)
{
	//for(int a:A)  - A is a pointer. We cannot do for loop on a pointer
	for(int i=0;i<n;i++)
	{
		cout << A[i] << endl;
	}
	return 0;
}

int *fun2(int n)
{
	//int *ptr = (int *)malloc(n * sizeof(n));
	int *ptr = new int[n];
	ptr[0] = 3;
	ptr[1] = 6;
	ptr[2] = 9;
	ptr[3] = 12;
	ptr[4] = 15;
	return ptr;
}

int main()
{
	int A[] = {1,2,3,4,5};
	int n=5;
	fun1(A,5);
	int *B = fun2(5);
	for(int i=0;i<n;i++)
	{
		cout << B[i] << endl;
	}
	//free(B);
	delete [ ]B;
	return 0;
}
