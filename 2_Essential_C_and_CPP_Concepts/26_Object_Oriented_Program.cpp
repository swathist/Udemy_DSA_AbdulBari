#include <iostream>
#include <stdio.h>

// Only difference between struct and class in OOP is that in struct all members are by default public and in class all members are by default private

using namespace std;

class rectangle
{
	private:
	int length;
	int breadth;

	public:
	void initialize(int l,int b)
	{
		length = l;
		breadth = b;
	}
	
	int area(void)
	{
		return length*breadth;
	}
	
	int perimeter(void)
	{
		return 2*(length+breadth);
	}
};

int main()
{
	int l,b;
	rectangle r;
	printf("Enter length, breadth: ");
	cin >> l >> b;

	r.initialize(l,b);
	int a = r.area();
	int p = r.perimeter();

	printf("Area=%d, Perimeter=%d\n",a,p);
	return 0;
}
