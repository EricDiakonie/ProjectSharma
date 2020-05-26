#include <iostream>
using namespace std;

class Vehicle
{
	public:
	int speed;
	bool automatic;
	
	Vehicle()
	{
		cout<<"class Vehicle initilized"<<endl;
	}
};

class Car
{
	public: 
	int fuelcapacity;
	string company;
	Car()
	{
		cout<<"class Car initialized"<<endl;
	}
};

class AirVehicle
{
	public: 
	int Passengers, maximumheight;
	AirVehicle()
	{
		cout<<"class AirVehicle initialized"<<endl;
	}
};

main(void)
{
	Vehicle v1;
	Car c1;
	AirVehicle a1;
}
