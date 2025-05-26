#pragma once

#include<iostream>
#include <string>
using namespace std;

class Employee {   // acts as node
private:
	static int e_count;
	int e_id; //: Unique identifier
	string e_name; //: Employee name
	float e_salary; //: Monthly salary
	Employee* e_next;
public:
	Employee()
	{
		e_count++;
		e_next = nullptr;
		e_id = e_count;
		e_name = "";
		e_salary = 0.0;
	}

	void displayEmp();

	int setEmp(int, string , float );

	string getName()
	{
		return e_name;
	}

	int getCount()
	{
		return e_count;
	}

	int getId()
	{
		return e_id;
	}
	void setSal(float s)
	{
		e_salary = s;
	}
	
	Employee* getNext();
	void setNext(Employee*);
	
};

