#include <iostream>
using namespace std;

class ClassOne
{
	int x = 100; 	// Standardm��ig Private
	
};

struct StructOne
{
	int x = 50;		// Standardm��ig Public
};

main(void)
{
	StructOne one;
	ClassOne two;
	
	cout<<one.x<<endl;
	cout<<two.x<<endl;
}
