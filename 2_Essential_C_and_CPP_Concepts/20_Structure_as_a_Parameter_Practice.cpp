#include <iostream>
#include <stdlib.h>

using namespace std;

struct rectangle {
	int length;
	int breadth;
};

void fun1(struct rectangle r1)
{
	r1.length = 14;
	r1.breadth = 7;
}

void fun2(struct rectangle *r2)
{
	r2->length = 20;
	r2->breadth = 10;
}

void fun3(struct rectangle &r3)
{
	r3.length = 6;
	r3.breadth = 3;
}

int main()
{
	struct rectangle r = {4,8};
	fun1(r);
	cout << r.length << " " << r.breadth << endl;
	fun2(&r);
	cout << r.length << " " << r.breadth << endl;
	fun3(r);
	cout << r.length << " " << r.breadth << endl;
}
