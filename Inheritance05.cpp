#include <iostream>
using namespace std;

class ClassOne
{
	int x = 100; 	// Standardmäßig Private
	
};

struct StructOne
{
	int x = 50;		// Standardmäßig Public
};

main(void)			//Test101 für GitHub
{
	StructOne one;
	ClassOne two;
	
	cout<<one.x<<endl;
	cout<<two.x<<endl;
}
