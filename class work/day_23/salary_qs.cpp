#include<iostream>

using namespace std;

static int id = 0;

typedef struct empdet
{
	int emp_id; //empID
	string empName;
	


}EMP;

typedef struct period
{
	int emp_id; //empID
	int period_days;

}PDAYS;

typedef struct salary
{
	int emp_id; //empID
	int salary_basicPay;
	int salary_variablePay;
	int salary_allowance;


}SAL;

int getSalary(SAL*,EMP*);

int grossSalary(SAL, PDAYS);
float taxDeduction(int);

int getEmpDetails(EMP*); // done
void dispEmpDetails(EMP);  //done

int getDays(PDAYS*,EMP*); //done
void displayDays(PDAYS); //done
//
//    MAIN
//


int main()
{
	EMP e[2];
	SAL s[2];
	PDAYS p[2];

	for (int i = 0;i < 2;i++)
	{
		getEmpDetails(&e[i]);
		getSalary(&s[i], &e[i]);
		getDays(&p[i], &e[i]);


	}
	for (int i = 0;i < 2;i++)
	{
		dispEmpDetails(e[i]);  //done
		displayDays(p[i]);
		cout << grossSalary(s[i], p[i])<<endl;
		cout << taxDeduction(grossSalary(s[i], p[i]))<<endl;


	}


	return 0;
}





//
// functions
//
int getEmpDetails(EMP* e)
{
	cout << "enter name:";cin >> e->empName;
	cout << "enter id:"; e->emp_id=++id;
	
	return EXIT_SUCCESS;

}
void dispEmpDetails(EMP e)
{
	cout << "========================================" << endl;
	cout << "name \t        :\t" << e.empName << endl;
	cout << "emp id     \t:\t" << e.emp_id << endl;
	cout << "========================================" << endl;


}
int getDays(PDAYS* p,EMP *e)
{
	cout << "enter days:";cin >> p->period_days;
	//cout << "enter id:";
	 p->emp_id=e->emp_id;

	return EXIT_SUCCESS;

}
void displayDays(PDAYS p)
{
	cout << "========================================" << endl;

	cout << "name \t        :\t" << p.period_days << endl;
	
	cout << "========================================" << endl;

}

int grossSalary(SAL e, PDAYS p)
{

	return (e.salary_variablePay + e.salary_basicPay*p.period_days + e.salary_allowance);


}

float taxDeduction(int grossS)
{
	return grossS * 0.1;


}

int getSalary(SAL* s , EMP* e)
{
	cout << "enter salary_allowance:";cin >> s->salary_allowance;
	cout << "enter salary_basicPay:";cin >> s->salary_basicPay;
	cout << "enter salary_variablePay:";cin >> s->salary_variablePay;

	s->emp_id = e->emp_id;

	return EXIT_SUCCESS;

}
