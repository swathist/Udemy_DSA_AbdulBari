#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	int A[n];

	for (int x:A)
	{
		cin >> x;
		cout << x << endl;
	}
}
