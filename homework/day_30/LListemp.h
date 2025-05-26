#pragma once
#include <iostream>
#include<string>
#include "Employee.h"
using namespace std;

class LListemp{

private:
	Employee* head;
public:
	LListemp() 
	{
		head = nullptr;

	}
	
	int addEmpEnd(int ,string ,float); // done

	/*int addEmpBeg(int);
	void addEmpAfter(int, int);*/

	
	bool delEmpNode(int id);  //done
	bool searchEmp(string name); //dome

	int updateSalary(int id,float); // done
	int countEmp();			//done
	void displayAll();  //done   

	
};
/*

	Add Employee – Add a new employee to the end of the list.
	Display All Employees – Show details of all employees.
	Delete Employee by ID – Remove an employee by their ID.
	Search Employee by Name – Return all employees whose names match a given name (case-sensitive).
	Update Salary by ID – Update the salary of an employee using their ID.
	Count Total Employees – Return the count of employees in the list.

	*/


//  ------------------- adding employee at the end ----------------

int LListemp::addEmpEnd(int id, string name, float sal)
{
	
    //create new node
	Employee* nn = new Employee;
	nn->setEmp(id, name, sal);

	if (head == nullptr)
	{
		//empty list and first node
		head = nn;
	}
	else
	{
		Employee* temp = head;
		while (temp->getNext() != nullptr)
			temp = temp->getNext();
		temp->setNext(nn);
		//cout << "new node added with value: " << temp->getData() <<nn->getData() <<endl;

	}

	return 0;



}



//----------------------- delete employee by id --------------------

bool LListemp::delEmpNode(int id)
{

	Employee* temp = head;

	if (temp == nullptr)
	{
		cout << "there are no employee" << endl;
		return false;
	}
	if (head->getId() == id)   //if the element is the first element i.e head
	{
		Employee* del = head;
		head = head->getNext();
		delete del;
		return true;
	}

	while (temp->getNext() != nullptr)
	{
		if (temp->getNext()->getId() == id)
		{
			Employee* del = temp->getNext();
			temp->setNext(temp->getNext()->getNext());
			delete del;
			return true;
		}
		temp = temp->getNext();
	}

	cout << "the employee id was not found:" << endl;


	return false;
}




// ----------------- search employee by name ---------------------

bool LListemp::searchEmp(string name)
{
	Employee* temp = head;
	bool flag = false;

	if (temp == nullptr)
	{
		cout << "there are no employee" << endl;
		return false;
	}
	while (temp != nullptr)
	{
		if (temp->getName() == name)
		{
			flag = true;
			cout<<temp->getName()<<endl;
		}
		temp = temp->getNext();
	}
	if (flag == true)
		return true;
	else
	{
		cout << "employee name not found " << endl;
		return false;
	}
}





// ------------------------- count ---------------

int LListemp::countEmp()
{
	int count = 0;
	Employee* temp = head;

	if (temp == nullptr)
	{
		cout << "Total Employees: " << count << endl;
		return EXIT_FAILURE;
	}
	while (temp != nullptr)
	{
		count++;
		temp = temp->getNext();
	}
	cout << "Total Employees: " << count << endl;
	return EXIT_SUCCESS;
}






//----------------- updated salary ------------------

int LListemp::updateSalary(int id ,float salary1)
{
	Employee* temp = head;

	if (temp == nullptr)
	{
		cout << "there are no employee" << endl;
		return EXIT_FAILURE;
	}
	while (temp != nullptr )
	{
		if (temp->getId() == id)
		{
			temp->setSal(salary1);
			return EXIT_SUCCESS;
		}
		temp = temp->getNext();
	}
	
	cout << "employee id not found " << endl;
	


	return EXIT_FAILURE;
}


// --------------------------- display -------------------
void LListemp::displayAll()
{
	Employee* temp = head;
	if (temp == nullptr)
	{
		cout << "No employees to display." << endl;
		return;
	}

	while (temp != nullptr)
	{
		//ID: 103, Name: Bob, Salary: 55000
		temp->displayEmp();
		cout << endl;
		temp = temp->getNext();
	}
	
}