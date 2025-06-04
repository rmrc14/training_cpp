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

	bool delEmpNode(int id);  //done
	bool searchEmp(string name); //dome

	int updateSalary(int id,float); // done
	int countEmp();			//done
	void displayAll();  //done   


	/*int addEmpBeg(int);
	void addEmpAfter(int, int);*/


};

