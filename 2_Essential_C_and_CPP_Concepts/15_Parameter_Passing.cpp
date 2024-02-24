/* Parameter passing: There are three types of parameter passing in C++
 * Pass by Value
 * Pass by Address
 * Pass by Reference - this is not seperate body but the machine will be pasted with main program rather than treating it seperately. This is more or less like Monolithic Programming for machine code but appears to be Module Programming for source code 
 */
#include <iostream>

using namespace std;

void swapbyvalue(int x,int y)
{
	x+=y;
	y=x-y;
	x-=y;
}

void swapbyaddress(int *x,int *y)
{
	(*x)+=(*y);
	(*y)=(*x)-(*y);
	(*x)-=(*y);
}

void swapbyreference(int &x,int &y)
{
	x+=y;
	y=x-y;
	x-=y;
}

int main()
{
	int a,b;
	a=10;
	b=20;
	swapbyvalue(a,b);
	//They are not swapped
	cout << "a: " << a << ", b: " << b << endl;
	swapbyaddress(&a,&b);
	//They are swapped
	cout << "a: " << a << ", b: " << b << endl;
	swapbyreference(a,b);
	//They are swapped
	cout << "a: " << a << ", b: " << b << endl;
	return 0;
}
