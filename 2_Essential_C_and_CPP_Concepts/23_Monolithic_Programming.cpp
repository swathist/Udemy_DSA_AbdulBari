#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int length=0,breadth=0;
	printf("Enter length, breadth: ");
	cin >> length >> breadth;

	int area=length*breadth;
	int perimeter=2*(length+breadth);

	printf("Area=%d, Perimeter=%d\n",area,perimeter);
	return 0;
}
