#include <iostream>

using namespace std;

class rectangle
{
	private:
	int length;
	int breadth;
	
	public:
	rectangle(int l,int b)
	{
		length = l;
		breadth = b;
		cout << "Length: " << length << endl;
		cout << "Breadth: " << breadth << endl;
	}

	int area(void)
	{
		return length * breadth;
	}
	
	void changelength(int l)
	{
		length = l;
		cout << "Length changes to: " << length << endl;
	}
};

int main()
{
	rectangle r(10,5);
	cout << "Area: " << r.area() << endl;
	r.changelength(20);
	return 0;
}
