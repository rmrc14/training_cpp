#include<iostream>

using namespace std;



struct employee
{
	int emp_id;
	string name;
	struct Date
	{
		int day, month, year;
	}joiningDate;


};

int main()
{
	struct employee e;
	
	e.emp_id = 101;
	e.name = "remin";
	e.joiningDate.day = 15;
	e.joiningDate.month = 4;
	e.joiningDate.year = 2025;

	cout << e.emp_id << "\t"<<e.name<<endl;
	cout << e.joiningDate.day << "/" << e.joiningDate.month<< "/" << e.joiningDate.year << endl;


	cout << sizeof(e) << "\t" << sizeof(e.joiningDate);


	return 0;
}