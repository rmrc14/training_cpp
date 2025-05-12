/*
pointers

nullptr => (void*)0


*/
#include <iostream>

using namespace std;

int main()
{

	int a = 10;
	int b = 20;
	int c = 30;

	int* ptr = nullptr;

	ptr = &a;
	//accessing the value of a using ptr
	cout << *ptr << endl;


	//update the value of a using ptr
	*ptr = 101;

	//accessing the value of a using ptr
	cout << *ptr << endl;
	cout << a << endl;


	ptr = &b;
	//accessing the value of a using ptr
	cout << *ptr << endl;

	ptr = &c;
	//accessing the value of a using ptr
	cout << *ptr << endl;

	return 0;

}