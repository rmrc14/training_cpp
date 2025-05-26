/*

Problem Statement: Employee Record Management using Linked List
Design a system in C++ to manage a list of employees using a singly linked list. Each Employee has the following details:

int id: Unique identifier
string name: Employee name
float salary: Monthly salary
You are required to implement the following operations:

Add Employee – Add a new employee to the end of the list.
Display All Employees – Show details of all employees.
Delete Employee by ID – Remove an employee by their ID.
Search Employee by Name – Return all employees whose names match a given name (case-sensitive).
Update Salary by ID – Update the salary of an employee using their ID.
Count Total Employees – Return the count of employees in the list.

*/




#include <iostream>
#include <string>
#include "LListemp.h"

using namespace std;

int main()
{
	LListemp list;  // create object of class


	int ch=1;
	int n;
	string name1;
	float sal;
	int id;
	// cout << "Menu:\n1. Add Employee\n2. Display All\n3. Delete by ID\n4. 
	// Search by Name\n5. Update Salary\n6. Count\n0. Exit\n";
	
	while (ch)
	{
		cin >> ch;
		switch (ch)
		{
		case 1:
			cin >> n >> name1 >> sal;
			list.addEmpEnd(n, name1, sal);
			
			break;
		case 2:
			cout << endl;
			list.displayAll();
			break;
		case 3:
			cin >> id;
			list.delEmpNode(id);
			break;
		case 4:
			cout << endl;
			cin >> name1;
			list.searchEmp(name1);
			break;
		case 5:
			cout << endl;
			cin >> id >> sal;
			list.updateSalary(id, sal);
			break;
		case 6:
			cout << endl;
			list.countEmp();
			break;
		case 0:
			ch = 0;
			break;
		
		default:
			cout << "Something went wrong" << endl;
		}
		
	}
	

	return 0;
}