#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	/*ofstream fout("emp.txt");
	fout << "name: remin var" << endl;
	for (int i = 0;i < 10;i++)
		fout << i << endl;

	fout.close();*/

	//ifstream fin("emp1.txt");
	//string line;
	//if (!fin.is_open()) // this statement is mandatory in file handling
	//	cout << "error no file" << endl;
	//while (getline(fin, line))
	//{
	//	cout << line << endl;
	//}
	//fin.close();

	ofstream fout("emp.txt", ios::app|ios::trunc);
	fout << "append 4: working" << endl;
	for (int i = 0;i < 10;i++)
		fout << i << endl;

	fout.close();


	return 0;
}