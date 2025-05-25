/*

implement empl class add employee use stack op and remove stack operation

*/


#include <iostream>

using namespace std;
int top = -1;
int bottom = -1;
int MAX = 3;


class Employee {
	static int emp_id;
	int e_id;
	string emp_name;


public:

	Employee() : e_id(0), emp_name(""){}    //default constructor  always initialise variables
	Employee(string);
	void displayEmp()const;
};

int Employee::emp_id;

Employee::Employee(string name)
{

	emp_id++; //= new int[MAX];
	e_id = emp_id;
	emp_name = name;


}
void Employee::displayEmp()const
{
	cout << "employee name:\t" << emp_name << endl;
	cout << "employee id  :\t" << e_id << endl;


}


//stack for employee class
int addEmp(Employee*);
int delEmp();
void display();

Employee* arr = new Employee[3];
int main()
{
	Employee e1("abc1"), e2("abc2");

	addEmp(&e1);
	arr[0].displayEmp();

	addEmp(&e2);
	arr[1].displayEmp();





	return 0;
}


int addEmp(Employee* e)
{
	if (top == MAX - 1)
	{
		cout << "stack is full" << endl;
		return 0;
	}
	top++;
	arr[top] = *e;
	cout << "pushed:" << endl;
	return 0;
}
int delEmp()
{
	if (top == bottom)
	{
		cout << "the stack is empty:" << endl;
		return 0;
	}
	cout << "popped: " << endl;
	arr[top].displayEmp();
	top--;
	return 0;
}
void display()
{
	if (top == bottom)
		cout << "the stack is empty:" << endl;

	for (int i = top;i >= 0;i--)
	{
		arr[i].displayEmp();
		cout << endl;
	}
}
