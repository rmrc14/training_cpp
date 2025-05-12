

#include <iostream>

using namespace std;

int main()
{

	int* ptr = nullptr;
	int* tmp = nullptr;
	int noofelem = 5;

	//allocate memory first and then use it
	ptr = (int*)malloc(sizeof(int) * noofelem);
	//copy base address
	tmp = ptr;

	for(int i=0;i<noofelem;i++)
	{
		cout << "enter the " << i + 1 << "value" << endl;
		cin >> *ptr++;
	}

	ptr = tmp;  //dont forget to reinitialize the ptr

	for (int i = 0;i < noofelem;i++,ptr++)
	{
		cout <<  i + 1 << "value = " <<*ptr<< endl;
	
	}

	cout << "using array notation: " << endl;

	ptr = tmp;  //dont forget to reinitialize the ptr

	for (int i = 0;i < noofelem;i++)
	{
		cout << i + 1 << "value = " << ptr[i] << endl;//array notation

	}

	return 0;

}