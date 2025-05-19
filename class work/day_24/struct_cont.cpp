#include<iostream>

using namespace std;

struct Date
{
	int day, month, year;
};

struct employee
{
	int emp_id;
	string name;
	Date joiningDate;


};

int main()
{
	struct employee e;
	
	e.emp_id = 101;
	e.name = "remin";
	e.joiningDate.day = 10;
	e.joiningDate.month = 4;
	e.joiningDate.year = 2025;

	cout << e.emp_id << "\t"<<e.name<<endl;
	cout << e.joiningDate.day << "/" << e.joiningDate.month<< "/" << e.joiningDate.year << endl;





	return 0;
}