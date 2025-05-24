#include <iostream>

using namespace std;

typedef struct employee
{
	int emp_id; //empID
	int empPhno;
	string empName;
	string empAddress;
	char empGender;

}EMP;

void disp(EMP);
int getEmpDetails(EMP*);


int main()
{
	/*EMP e1;
	e1.emp_id = 101;
	e1.empName = "remin";
	e1.empAddress = "chennai";
	e1.empGender = 'm';
	e1.empPhno = 45676;
	cout << "sizeof emp :" << sizeof(EMP) << "\t sizeof:" << sizeof(e1) << endl;

	cout << "name \t        :\t" << e1.empName << endl;
	cout << "emp id     \t:\t" << e1.emp_id << endl;
	cout << "address    \t:\t" << e1.empAddress << endl;
	cout << "gender\t        :\t" << e1.empGender << endl;
	cout << "phone number\t:\t" << e1.empPhno << endl;*/

	EMP e[3];
	for (int i = 0;i < 2;i++)
	{

		getEmpDetails(&e[i]);
	}
	for (int i = 0;i < 2;i++)
	{
		disp(e[i]);
	}


	return 0;

}
void disp(EMP e)
{

	
		cout << "========================================"<<endl;
		cout << "name \t        :\t" << e.empName << endl;
		cout << "emp id     \t:\t" << e.emp_id << endl;
		cout << "address    \t:\t" << e.empAddress << endl;
		cout << "gender\t        :\t" << e.empGender << endl;
		cout << "phone number\t:\t" << e.empPhno << endl;
		cout << "========================================"<<endl;

}

int getEmpDetails(EMP* e)
{

	cout << "enter name:";cin >> e->empName;
	cout << "enter id:";cin >> e->emp_id;
	cout << "enter gender:";cin >> e->empGender;
	cout << "enter address:";cin >> e->empAddress;
	cout << "enter phone num:";cin >> e->empPhno;
	return EXIT_SUCCESS;

}