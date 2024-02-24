#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct rectangle {
	int l;
	int b;
};

int main()
{
	/*
	 * In C++ struct can be ignored
	 * static object (Stack segment)
	 */

	rectangle r = {20,19};
	cout << r.l << endl;
	cout << r.b << endl;

	rectangle * ptr = &r;
	cout << ptr->l << endl;
	cout << ptr->b << endl;

	 /* 
	  * Dynamic object (Heap segment)
	  */
	ptr = (rectangle *)malloc(sizeof(rectangle));
	ptr->l = 22;
	ptr->b = 11;
	cout << ptr->l << endl;
	cout << ptr->b << endl;
	free(ptr);

	/* 
	 * Dynamic object (Heap segment)
	 */
	ptr=new rectangle;
	ptr->l = 44;
	ptr->b = 33;
	cout << ptr->l << endl;
	cout << ptr->b << endl;
	delete [ ]ptr;

	return 0;
}
