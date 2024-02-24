/* Functions: Function is a piece of code which performs specific task. A group of related instruction to perform a specific task. 
 * Used to break down the task into pieces to make it easily developed
 *
 * Monolithic Programming: This is the type of programming where the code is inside a single body.
 *
 * Module Programming (or) Procedural Programming: The type of porgramming divided into modules or pieces. It will be easier to develop.
 *
 * Object Oriented Programming: Group the functions together to put them in a single class
 */

#include <iostream>

using namespace std;

/* 
 * a and b are formal parameters
 */
int add(int a,int b)				//Prototype of a function
{
	return a+b;
}

int main()
{
	int x,y,z;		
	x=10;
	y=5;
	/*
	 * x and y are actual parameters
	 */
	z=add(x,y);				//Function call
	cout << "Result: " << z << endl;
	return 0; 
}
