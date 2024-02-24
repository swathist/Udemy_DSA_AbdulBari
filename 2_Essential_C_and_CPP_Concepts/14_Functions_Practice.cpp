#include <iostream>

using namespace std;

int add(int a,int b)
{
	return a+b;
}

int main()
{
	int x=10,y=15,z;
	z = add(x,y);
	cout << "Sum: " << z << endl;
	return 0;
}
