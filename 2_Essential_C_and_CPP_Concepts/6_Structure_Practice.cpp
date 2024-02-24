/*
 *
 *
 * Using Structure padding
 *
 */

#include <iostream>

using namespace std;

struct rectangle {
	int length;
	int breadth;
	char x;
}r1,r2;

int main()
{
	struct rectangle r3 = {10,5};
	cout << "Area of rectangle: " << r3.x << r3.length * r3.breadth << endl;
	//Example of structure padding: makes it easier to access structure members
	cout << "Size allocated: " << sizeof(r3);
	return 0;
}
