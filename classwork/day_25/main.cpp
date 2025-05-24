#include<iostream>
#include<string>
using namespace std;
static int id = 0;
typedef struct Employee
{
	bool e_relieved;
	char e_gender;
	int e_id;
	string e_name;
	string e_dept;


}EMP;

typedef struct Salary
{
	int s_id;
	int s_basicSalary;
	

}SAL;


int getDetailsAdd(EMP*, SAL*);
void displayList(EMP, SAL);

int remove_emp(EMP*);

int searchEmp(EMP,string);


int getDetailsAdd(EMP* e, SAL* s)
{
	e->e_id=s->s_id = ++id;
	cout << "enter the employee id: "<< e->e_id;
	cout << "enter the employee name: ";cin >> e->e_name;
	cout << "enter the employee gender: ";cin >> e->e_gender;
	cout << "enter the employee dept: ";cin >> e->e_dept;
	cout << "enter the employee basic salary: ";cin >> s->s_basicSalary;
	e->e_relieved = false;
	if (e->e_relieved)
		cout << "Active employee account: ";
	else
		cout << "Disabled emp_account:  ";
	cout << "=============================================" << endl;
	return EXIT_SUCCESS;
}

void displayList(EMP e, SAL s)
{
	if(!e.e_relieved)
	{
		cout << "==============================================" << endl;
		cout << "employee id: " << e.e_id;
		cout << "employee name: " << e.e_name;
		cout << "employee gender: " << e.e_gender;
		cout << "employee dept: " << e.e_dept;
		cout << "employee basic salary: " << s.s_basicSalary;
		
	}
	else
		cout << "Disabled emp_account:  ";

	cout << "=============================================" << endl;
}

int remove_emp(EMP* e)
{
	if (!e->e_relieved)
		e->e_relieved = true;
	else
		cout << "account was already disabled";

	return EXIT_SUCCESS;
}

int searchEmp(EMP e,string name)
{
	for (int i = 0;i < id;i++)
		if (!e.e_relieved)
			return i;
		else
			continue;

	return -1;

}