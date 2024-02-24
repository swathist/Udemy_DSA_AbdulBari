#include <iostream>

using namespace std;

class rectangle
{
	private:
	int length;
	int breadth;

	public:
	rectangle()
	{
		length = breadth = 1;
	}
	rectangle(int l,int b);
	int area();
	int perimeter();
	int getlength()
	{
		return length;
	}
	void getlength(int l)
	{
		length = l;
	}
};
