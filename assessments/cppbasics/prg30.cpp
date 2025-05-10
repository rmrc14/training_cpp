/*
30.Write a Program to Print the Rotated Hourglass Pattern
*/


#include<iostream>


void pattern(int);


using namespace std;
int main()
{

	int n = 5;

	pattern(n);

	return 0;
}
void pattern(int n)
{
	int i, j;
	for (i = n - 1; i >= 0; i--)
	{
		for (j = 1; j < n - i + 1; j++)
			cout << "*";
		for (j = 0; j <= 2 * i; j++)
			cout << " ";

		for (j = 0; j <= n - i - 1; j++)
			cout << "*";
		cout << endl;
	}




	for (i = 0; i < n; i++)
	{

		for (j = 1;j < n - i;j++)
			cout << "*";
		for (j = 0;j <= 2 * i + 2;j++)
			cout << " ";
		for (j = 1;j <= n - i - 1;j++)
			cout << "*";

		cout << endl;

	}

}