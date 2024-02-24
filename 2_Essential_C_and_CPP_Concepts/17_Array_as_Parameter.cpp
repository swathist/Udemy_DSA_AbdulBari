/* Parameter passing of the array is always pass by address
 */

#include <iostream>

using namespace std;

void fun1(int *A,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout << A[i] << endl;
	}
}

int * fun2(int n)
{
	int *p;
	p = (int *)malloc(n*sizeof(int));
	p[0] = 1;
	p[1] = 2;
	p[2] = 3;
	p[3] = 4;
	p[4] = 5;
	return p;
}

int main()
{
	int A[5] = {2,4,6,8,10};
	int i;
	//1 -Passing array as argument
	fun1(A,5);
	//2 - Return a array of size
	int * B = fun2(5);
	for(i=0;i<5;i++)
	{
		cout << B[i] << endl;
	}
	return 0;
}
