#pragma once

#include<string>
#include<iostream>
using namespace std;

class Employee
{
public:
	Employee(int , string);
	~Employee();
	bool operator==(const Employee& other)const   // parameter inside also need to be constant
	{
		return (e_id == other.e_id && e_name == other.e_name); //make sure to return true and false

	}
	void display() const
	{
		cout << "employee name: " << e_name << endl;
		cout << "id: " << e_id << endl;
	}  
	string getName()
	{
		return e_name;
	}
	int getId()
	{
		return e_id;
	}
private:
	string e_name;
	int e_id;

};

Employee::Employee( int e_id,string name):e_id(e_id),e_name(name)
{

}

Employee::~Employee()
{
}