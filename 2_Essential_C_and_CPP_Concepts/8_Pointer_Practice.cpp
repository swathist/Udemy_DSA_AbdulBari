#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int *p;
	p = &a;

	cout << "Using a: " << a << endl;
	cout << "Using ptr: " << *p << endl;

	/* Pointer to an array
	 */
	int A[5] = {1,2,3,4,5};
	p = A;
	//p = &A[0]; //This can also be used
	//1 - accessign variables using array elements
	for(int x:A)
	{
		cout << x << endl;
	}
	//for(int x:p) does not work
	//2 - accessign variables using pointer
	for(int x=0;x<5;x++)
	{
		cout << p[x] << endl;
	}

	//3 - declaring in heap in C Program
	p = (int *)malloc(5 * sizeof(int));
	p[0] = 15;
	p[1] = 16;
	p[2] = 17;
	p[3] = 18;
	p[4] = 19;

	for(int x=0;x<5;x++)
	{
		cout << p[x] << endl;
	}
	free(p);

	//4 - declaring in heap in C++ program
	p = new int[55555];
	p[0] = 35;
	p[1] = 36;
	p[2] = 37;
	p[3] = 38;
	p[4] = 39;

	for(int x=0;x<5;x++)
	{
		cout << p[x] << endl;
	}
	delete []p;

	//5 - Size of pointer of different data types will be the same
	int *p1;
	char *p2;
	float *p3;
	double *p4;
	struct rectangle *p5;

	cout << "Size of int pointer: " << sizeof(p1) << endl;
	cout << "Size of char pointer: " << sizeof(p2) << endl;
	cout << "Size of float pointer: " << sizeof(p3) << endl;
	cout << "Size of double pointer: " << sizeof(p4) << endl;
	cout << "Size of struct pointer: " << sizeof(p5) << endl;

	return 0;
}
