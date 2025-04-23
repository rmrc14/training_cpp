/*

4) Write a program to swap two numbers without using third variable and
without using functions or pointers.

*/

#include<iostream>

using namespace std;


int main(){

	int a, b;
	cout << "enter the 2 variables" << endl;
	cin>>a>> b;
	cout << "a=" << a << "b=" << b;

	a = a + b;   // swapping two no. without third variables
	b = a - b;
	a = a - b;
	cout << "a=" << a << "b=" << b;

	

return 0;
}