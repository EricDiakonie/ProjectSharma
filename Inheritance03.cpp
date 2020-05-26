#include <iostream>
using namespace std;

class Person
{
	string name;
	public:
	
	Person()
	{
		cout<<"You are now a living being"<<endl;
	}
	
	void setName(string name)
	{
		this->name = name;
	}
	
	void getName()
	{
		cout<<this->name<<endl;
	}
};

class Student: Person
{
	char classes;
	
public:
	void setclasses(char classes)
	{
		this->classes = classes;
	}
	
	void getClasses()
	{
		cout<<this->classes<<endl;
	}
	
	Student()
	{
		cout<<"Welcome at our school"<<endl;
	}
};

class Intern: Person
{
	char gender;
	public:
	
	void set(char gender)
	{
		this->gender = gender;
	}
	
	void getGender()
	{
		cout<<this->gender<<endl;
	}	
	
	Intern()
	{
		cout<<"I don't even know what an Intern is"<<endl;
	}
}

main(void)
{
	Intern i1;
	Student s1;
}
