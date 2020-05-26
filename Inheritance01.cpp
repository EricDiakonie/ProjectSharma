#include <iostream>
using namespace std;

class Person
{
	public:
	string name, workType;
	int age;
	
	void set_Data(string name, int age)
	{
		this->age = age;
		this->name = name;
	}
	
	void printData()
	{
		cout<<age<<endl;
		cout<<name<<endl;
		cout<<workType<<endl;
	}
};

class BasketballPlayer: public Person
{
	string name;
	int height, matchesPlayed;
	
	public:
		void set_Data(string name, int age, int matchesPlayed, int height)
		{
			this->name = name;
			this->age = age;
			this->matchesPlayed = matchesPlayed;
			this->height = height;
		}
		
		void printData()
		{
			cout<<name<<endl;
			cout<<age<<endl;
			cout<<matchesPlayed<<endl;
			cout<<height<<endl;
		}
};

class Employee: public Person
{
	public:
		int id, startYear;
		
		void set_Data(string name, int age, int id, int startYear)
		{
			this->name = name;
			this->age = age;
			this->id = id;
			this->startYear = startYear;
		}
		
		void printData()
		{
			cout<<name<<endl;
			cout<<age<<endl;
			cout<<id<<endl;
			cout<<startYeary<<endl;
		}
};

main(void)
{
	Person p1;
	
	p1.set_Data("Eric",23,"student");
	
	p1.printData();
	
	return 0;
}
