#include <iostream>
using namespace std;

struct One
{
	public: int x = 100;
	
};

class Two: public One
{
	public: int y = 200;
};

main(void)
{
	One one;
	Two two;
	
	cout<<one.x<<endl;
	cout<<two.x<<endl;
	cout<<two.y<<endl;
}
