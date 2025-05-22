#include<iostream>

using namespace std;

class Employee
{
private:
	int e_id;
	string e_name;

public:
	Employee();
	Employee(int , string );
	~Employee() //destructor used to cleanup the memory
	{
		cout << "destructor getting called:" << endl;

	}
	void display() 
	{
		//cout << "display function got called:" << endl;
		cout << e_id << " " << e_name<<endl;
	}
};

Employee::Employee() //default constructor
{
	cout << "default constructor got called:" << endl;
	e_id = 101;
	e_name = "e_name";
	display();
}
Employee::Employee(int id, string name)
{
	cout << "parametrized constructor got called:" << endl;
	e_id = id;
	e_name = name;
	display();
}

int main()
{
	Employee e,e1(123,"abc");

	Employee e2(e1);
	e2.display();

	Employee e3 = e1;
	e3.display();

	return 0;
}