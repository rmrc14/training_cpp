/*
pointers

nullptr => (void*)0


*/
#include <iostream>

using namespace std;

int main()
{

	int a = 10;
	char ch = 'A';
	float f = 10.5;

	int* ptr = nullptr;

	cout << "adress of a :" << (unsigned long int) & a<<" and its value is just :"<<a<<endl;
	cout << "adress of ch:" << (unsigned long int) & ch << " and its value is just :" << ch << endl;
	cout << "adress of f :" << (unsigned long int) & f << " and its value is just :" << f << endl;


	ptr = &a;
	printf("address of ptr =%u and its value =%u\n", &ptr, ptr);
	printf("ptr =%u and its value =%d\n", ptr, *ptr);


	return 0;

}