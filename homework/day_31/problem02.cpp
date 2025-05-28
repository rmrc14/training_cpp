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

	void calculateSal(int codingHr)
	{
		//Assume ₹500/hour and ₹5000/team member
		 e_sal = codingHr * 500;
	}
	//coding hours + team size
	void calculateSal(int codingHr ,int teamSize)
	{
		//Assume ₹500/hour and ₹5000/team member
		e_sal = codingHr * 500 + 5000 * teamSize;
	}
protected:
	float e_sal;
public:
	Employee(string name, int id,float sal) :e_id(id), e_name(name) ,e_sal(sal)
	{
	
	}

	void displayEmp()
	{
		cout << "employ id:" << e_id << endl;
		cout << "employ name:" << e_name << endl;

	}
};

class Developer :public Employee
{
private:
	
	float d_sal;
	

protected:
	int d_codingHr;
public:


	Developer(string name, int age, int rollno, float m1, float m2, float m3) : Employee(name, rollno, age)
	{
		
	}


	void display(bool flag)
	{
		

	}

};

class Manager :public Employee
{
private:
	int m_teamSize;
	
	
public:
	


};

class TechLead :public Manager, Developer
{

};


int main()
{
	

	return 0;
}