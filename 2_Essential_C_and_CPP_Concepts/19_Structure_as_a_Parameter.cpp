#include <iostream>
#include <stdlib.h>

using namespace std;

struct rectangle {
	int length;
	int breadth;
};

int areabyvalue(struct rectangle r)
{
	//Won't make any changes to the original structure
	//An array inside a structure can be passed as call by value.
	return r.length * r.breadth;
}

int areabyaddress(struct rectangle *r)
{
	//Make changes to the original structure
	return r->length * r->breadth;
}

int areabyreference(struct rectangle &r)
{
	//It is a alias to the original structure
	return r.length * r.breadth;
}

int main()
{
	struct rectangle r1 = {10,6};
	cout << "Area of rectangle: " << areabyvalue(r1) << endl;
	cout << "Area of rectangle: " << areabyaddress(&r1) << endl;
	cout << "Area of rectangle: " << areabyreference(r1) << endl;
	return 0;
}
