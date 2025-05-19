#include<iostream>
#include<cstdlib>
using namespace std;



typedef struct Employee
{
	int e_id;
	char e_name[20];
	char e_desg[20];


}EMP;

int main()
{
	EMP e;

	cin >> e.e_id >> e.e_name >> e.e_desg;
	cout << e.e_id << "\t" << e.e_name<< "\t" << e.e_desg << endl;


	EMP* e1 = (EMP*)malloc(sizeof(EMP) * 3);

	EMP* tmp = e1;


	cin >> e1->e_id >> e1->e_name >> e1->e_desg;
	e1++;
	cin >> e1->e_id >> e1->e_name >> e1->e_desg;
	e1++;
	cin >> e1->e_id >> e1->e_name >> e1->e_desg;
	
	e1 = tmp;
	cout << e1->e_id << "\t" << e1->e_name << "\t" << e1->e_desg << endl;
	e1++;
	cout << e1->e_id << "\t" << e1->e_name << "\t" << e1->e_desg << endl;
	e1++;
	cout << e1->e_id << "\t" << e1->e_name << "\t" << e1->e_desg << endl;
	

	return 0;
}