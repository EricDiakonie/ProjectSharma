#include <iostream>
using namespace std;

class ClassOne
{
	int x = 100; 	// Standardm‰ﬂig Private
	
};

struct StructOne
{
	int x = 50;		// Standardm‰ﬂig Public
};

main(void)
{
	StructOne one;
	ClassOne two;
	
	cout<<one.x<<endl;
	cout<<two.x<<endl;
}
