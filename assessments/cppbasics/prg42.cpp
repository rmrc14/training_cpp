/*
42.Write a Program to Swap the Values of Two Variables Without Using any Extra Variable
*/

#include<iostream>


void swap(int, int);

using namespace std;
int main()
{
	int x = 10, y = 20;
	swap(x, y);

	return EXIT_SUCCESS;
}

void swap(int a, int b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	cout << " a =" << a << "\n b= " << b;

}