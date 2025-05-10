/*
43.Write a Program to Print the Maximum Value of an Unsigned int Using One's Complement (~) Operator
*/

#include<iostream>


void swap(int, int);

using namespace std;
int main()
{
	int x = 10, y = 20;
	cout << "a: " << x<<endl;
	cout << "b: " << y << endl;
	swap(x, y);

	return EXIT_SUCCESS;
}

void swap(int a, int b)
{
	cout << endl;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	cout << "a: " << a << "\nb: " << b;

}