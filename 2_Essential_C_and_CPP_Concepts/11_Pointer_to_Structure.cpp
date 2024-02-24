/* Pointer to structure: 
 *
 *
 *
 *
 */

#include <iostream>

struct rectangle {
	int l;
	int b;
};

using namespace std;

int main()
{
	struct rectangle r={10,5};
	struct rectangle *p = &r;
	//1 - accessing a structure using a pointer (structure is in stack)
	//cout << (*p).l << endl;
	cout << p->l << endl;
	cout << p->b << endl;
	//2 - create object dynamically using a pointer (structure is in heap)
	p = (struct rectangle *)malloc(sizeof(struct rectangle));
	p->l = 20;
	p->b = 15;
	cout << p->l << endl;
	cout << p->b << endl;
	return 0;
}
