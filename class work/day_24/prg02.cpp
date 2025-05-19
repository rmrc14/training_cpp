#include<iostream>
#include<cstdlib>

using namespace std;

typedef struct Employee
{
	int id;
	char name[20];
	


}EMP;


int main()
{
	int* ptr = (int*)malloc(sizeof(int));
	*ptr = 10;

	int* p = new int(10);

	cout << *p<<endl;
	
	cout << "size of ptr " << sizeof(*ptr) << endl;
	cout << "size of ptr " << sizeof(ptr) << endl;
	cout << "size of p " << sizeof(*p) << endl;
	int* a =  new int [10];
	for (int i = 0;i < 10;i++)
	{
		a[i] = i + 1 * 2;
	}

	for (int i = 0;i < 10;i++)
	{
		cout<<a[i]<<" ";
	}
	cout << endl;
	EMP* e = new EMP[10];
	EMP* e1 = new EMP{ 101,"hello" };

	cout << e1->id << "\t" << e1->name << endl;

	delete e1;
	delete[] e;

	return 0;
}