

#include <iostream>

using namespace std;

int main()
{


	int a;
	a = 10;

	//int* ptr = (int* )10;
	// store a value in an address and make the address
	//pointed by the pointer
	/*int* ptr = &a;
	*ptr = 101;
	cout << *ptr;*/

	int* ptr = (int*)malloc(sizeof(int)*3);

	int* tmp = ptr;

	cout << "address of ptr =" << (unsigned long int)ptr<<endl;
	*ptr = 202;
	cout << "address of ptr =" << (unsigned long int)ptr << endl;
	ptr++;
	*ptr = 203;
	cout << "address of ptr =" << (unsigned long int)ptr << endl;
	ptr++;
	*ptr = 301;
	cout << "address of ptr =" << (unsigned long int)ptr << endl;
	
	cout << *ptr;
	ptr = tmp;// reassigned back to the base address


	return 0;

}