#include <iostream>

using namespace std;

int main()
{

	int a[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };

	for (int i = 0;i < 3;i++)
		for (int j = 0;j < 5;j++)
		{
			cout << "address =" << (unsigned long int) & a[i][j] << "\t" << "value =" << a[i][j]<<endl;
		}

	int* ptr = nullptr;
	//ptr = a[0];

	ptr = &a[0][0];  //safe coding

	cout << *ptr << endl;
	ptr++;cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;


	//int** ptr1 = &a[0][0];


	return 0;

}

