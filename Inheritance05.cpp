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

main(void)			//Test101 f�r GitHub
{
	StructOne one;
	ClassOne two;
	
	cout<<one.x<<endl;
	cout<<two.x<<endl;
}
