#include <iostream>

using namespace std;

int main()
{


	int a[] = { 10,20,30 };


	int* ptr = a;

	
	cout << *ptr++ << endl;// here its on address
	cout << *++ptr << endl;   
	cout << ++*ptr << endl;// here its on content

	ptr = a;//reassigned to the base address
	
	int prod = *ptr * *ptr;
	cout << prod<<endl;

	cout << sizeof(ptr) << " " << sizeof(void*) << endl;


	return 0;

}