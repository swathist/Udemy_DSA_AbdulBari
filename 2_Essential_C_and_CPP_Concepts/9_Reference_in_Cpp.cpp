/* Reference: A nickname or alias given to a variable.
 * 
 * Declaration:
 *
 * int a = 10;
 * int &r = a; //We have names a and r for the same location. Alias or reference
 * It is useful for parameter passing.
 *
 * Reference doesn't consume additional memory.
 */

#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int &r = a;
	cout << a << endl;
	r++;
	cout << r << endl;
	cout << a << endl;
	int b=30;
	r=b;
	cout << r << endl;
	cout << b << endl;
	return 0;
}
