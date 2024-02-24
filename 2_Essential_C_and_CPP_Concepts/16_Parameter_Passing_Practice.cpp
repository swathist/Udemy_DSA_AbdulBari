#include <iostream>

using namespace std;

void addbyvalue(int a)
{
	a++;
}

void addbyaddress(int *a)
{
	(*a)++;
}

void addbyreference(int &a)
{
	//may or may not generate inline function
	a++;
}

int main()
{
	int num1=10,sum;
	addbyvalue(num1);
	cout << num1 << endl;
	addbyaddress(&num1);
	cout << num1 << endl;
	addbyreference(num1);
	cout << num1 << endl;
	return 0;
}
