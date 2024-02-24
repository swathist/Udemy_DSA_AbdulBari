#include <iostream>
#include <stdio.h>

struct rectangle
{
	int length;
	int breadth;
};

using namespace std;

void initialize(struct rectangle *r,int l,int b)
{
	r->length = l;
	r->breadth = b;
}

int area(struct rectangle r)
{
	return r.length*r.breadth;
}

int perimeter(struct rectangle r)
{
	return 2*(r.length+r.breadth);
}

int main()
{
	int l,b;
	rectangle r={0,0};
	printf("Enter length, breadth: ");
	cin >> l >> b;

	initialize(&r,l,b);
	int a = area(r);
	int p = perimeter(r);

	printf("Area=%d, Perimeter=%d\n",a,p);
	return 0;
}
