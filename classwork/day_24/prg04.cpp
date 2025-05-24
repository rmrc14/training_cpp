#include<iostream>

#define depts 3
#define noEmps 2

using namespace std;

typedef struct employee
{
	int e_id;
	char e_name[20];
}EMP;




int main()
{
	//EMP e[depts][noEmps]
	EMP** e = nullptr;

	//e = (EMP**)malloc(depts * sizeof(EMP*));
	
	e = new EMP * [depts];


	cout << "address of e: "<< (unsigned long int)e << endl;

	for (int i = 0;i < depts;i++)
	{
		//e[i] = (EMP*)malloc(noEmps * sizeof(EMP));

		e[i] = new EMP[noEmps];
		cout << "address of e[" << i << "] = " << (unsigned long int)e[i]<<endl;
	}

	cout << "enter employee details dept wise:" << endl;

	for (int i = 0;i < depts;i++)
	{
		cout << "enter the details for " << i + 1 << "department" << endl;
		for (int j = 0;j < noEmps;j++)
		{
			cout << "id: ";cin >> e[i][j].e_id;
			cout << "name: ";cin >> e[i][j].e_name;
		}

	}


	for (int i = 0;i < depts;i++)
	{
		cout << "details for department" << endl;
		for (int j = 0;j < noEmps;j++)
		{
			cout << "id: "<<e[i][j].e_id << endl;
			cout << "name: "<< e[i][j].e_name << endl;
		}
		cout << "=======================" << endl;
	}


	return 0;
}