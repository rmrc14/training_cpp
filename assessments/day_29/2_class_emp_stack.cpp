/*

implement empl class add employee use stack op and remove stack operation

*/


#include <iostream>

using namespace std;



class Employee {
	static int emp_id;
	int e_id;
	string emp_name;


public:

	Employee() {}    //default constructor
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

// --------------------------------   STACK ---------------------

class Stack {
	int* arr;
	int top;
	int bottom;
	int MAX;

public:
	Stack(){}
	Stack(int);
	int push(int);
	int pop();
	void display()const;
};

Stack::Stack(int size=3)
{
	MAX = size;
	Employee* arr = new Employee[3];
	top = -1;
	bottom = -1;


}
int Stack::push(int v)
{
	if (top == MAX - 1)
	{
		cout << "stack is full" << endl;
		return 0;
	}
	top++;
	arr[top] = v;

	return 0;
}
int Stack::pop()
{
	if (top == bottom)
	{
		cout << "the stack is empty:" << endl;
		return 0;
	}
	cout << "popped: " << arr[top] << endl;
	top--;
	return 0;
}
void Stack::display()const
{
	if (top == bottom)
		cout << "the stack is empty:" << endl;

	for (int i = top;i >= 0;i--)
	{
		cout << arr[i] << " " << endl;
	}
}

int main()
{
	Employee e1("abc1"), e2("abc2");

	
	Employee* arr = new Employee[3];

	Stack* S = new Stack[3];



	return 0;
}


