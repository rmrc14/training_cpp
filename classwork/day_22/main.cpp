
#include<iostream>

using namespace std;



int main()
{

	int* ptr = nullptr;//(int*)0;
	int a = 10;
	cout << a<<" "<<(unsigned long int) & a << endl;
	cout << ptr<<" "<<(unsigned long int) & ptr << endl;
	
	ptr = &a;

	cout << (unsigned long int) ptr<<" "<<*ptr << endl;

	
	*ptr = 20;

	cout << a << " " << *ptr<<endl;
	
	int arr[] = { 1,2,3 };

	ptr = arr;

	cout << *ptr << " ";
	ptr++;
	cout << *ptr << " ";
	ptr++;
	cout << *ptr << " ";




	return 0;

}