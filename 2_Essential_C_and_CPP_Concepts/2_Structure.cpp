#include <iostream>

struct rectangle {
	int l;
	int b;
};

using namespace std;

int main()
{
	struct rectangle rect;
	cout << "Please enter length: ";
	cin >> rect.l;
	cout << "Please enter breadth: ";
	cin >> rect.b;
	cout << "Length: " << rect.l << endl << "Breadth: " << rect.b << endl;
	return 0;
}
