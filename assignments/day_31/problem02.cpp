/*

 Problem 2: Employee Salary Calculation with Multiple Roles
Concepts: Class, Multiple Inheritance, Constructor, Method Overloading

Problem Statement:
	Create a class Employee with basic details (empId, name).
	Create two base classes Developer and Manager which inherit Employee and
	contain role-specific data (coding hours and team size respectively). 
	Derive a class TechLead from both Developer and Manager.
	Use constructors to initialize data. 

	Overload a function calculateSalary() to:

		Calculate salary based on only coding hours
		Calculate salary based on coding hours + team size

*/
#include<iostream>
#include <string>

using namespace std;

class Employee
{
private:
	int e_id;
	string e_name;
protected:
	float e_sal;
	float calculateSal(int codingHr)
	{
		//Assume ₹500/hour and ₹5000/team member
		return e_sal = codingHr * 500;
	}
	//coding hours + team size
	float calculateSal(int codingHr ,int teamSize)
	{
		//Assume ₹500/hour and ₹5000/team member
		return e_sal = codingHr * 500 + 5000 * teamSize;
	}

	
public:
	Employee(string name, int id,float sal,int codingHr ,int teamSize=0) :e_id(id), e_name(name) ,e_sal(sal) 
	{
	/*	if (teamSize > 0)
			calculateSal( codingHr,  teamSize);
		else
			calculateSal(codingHr);*/
	
	}

	void displayEmp()
	{
		cout << "employ id:" << e_id << endl;
		cout << "employ name:" << e_name << endl;

	}
};

class Developer :public Employee
{

protected:
	int d_codingHr;
public:


	Developer(string name, int id, float sal, int codingHr, int teamSize)
		: Employee( name,  id,  sal,  codingHr,  teamSize),d_codingHr(codingHr)
	{
		
	}


	void display(bool flag)
	{
		

	}

};

class Manager :public Employee
{
protected:
	int m_teamSize;
	
	
public:
	Manager(){}


};

class TechLead :public Manager, Developer
{
public:
	TechLead(string name, int id, float sal, int codingHr, int teamSize )
	{}
	void display()
	{

	}
};


int main()
{
	

	return 0;
}