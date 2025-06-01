#include<iostream>
#include <fstream>

using namespace std;
struct Employee
{
	int id;
	char name[20] ;
};


int main()
{
	fstream fio;
	struct Employee e = { 101,"Amit" };
	fio.open("Text.txt", ios::in | ios::out|ios::binary);

	if (!fio)
	{
		cerr << "error: in the opening file" << endl;

	}
	//fio << "hello world" << endl;
	fio.write((char*)&e, sizeof(e));
	fio.close();

	cout<<fio.tellg() << endl;
	cout << fio.tellp()<<endl;

	fio.open("Text.txt", ios::in | ios::out | ios::binary);

	if (!fio)
	{
		cerr << "error: in the opening file" << endl;

	}
	struct Employee e1;
	fio.read((char*)&e1, sizeof(e1));
	cout << e1.id << "\t" << e1.name << endl;

	fio.close();

	return 0;
}