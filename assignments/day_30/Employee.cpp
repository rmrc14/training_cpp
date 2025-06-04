
#include <iostream>
#include<string>
#include "Employee.h"
using namespace std;


int Employee::e_count = 0;


Employee* Employee::getNext()
{
	return e_next;
}

void Employee::setNext(Employee* nn)
{
	e_next = nn;
}


int Employee::setEmp(int id, string name, float sal)
{
	e_id = id;
	e_name = name;
	e_salary = sal;

	return EXIT_SUCCESS;
}



// ---------------- display -----------------
void Employee::displayEmp()
{
	//ID: 103, Name: Bob, Salary: 55000

	cout << "ID: " << e_id << ", Name: " << e_name << ", Salary:" << e_salary << endl;

}