#include <iostream>

using namespace std;

struct cards {
	int face;
	int shape;
	int color;
};

int main()
{
	/*struct cards c;
	c.face = 1;
	c.shape = 0;
	c.color = 0;*/
	//Initialize the structure
	struct cards c = {1,0,0};
	//Initilialize the Array of structures
	struct cards deck[52] = {{1,0,0},{2,0,0}};
	cout << deck[0].face << " " << deck[0].shape << " " << deck[0].color << endl;
}
