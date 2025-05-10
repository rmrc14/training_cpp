/*
29.Write a Program to Print the Hourglass Pattern
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
void pattern(int num)
{
	int i, j, k;
	for (i = num ;i >= 0;i--)
	{
		for (j = 0;j < num - i;j++)
			cout << " ";
		for (j = 0;j <= 2 * i;j++)
			cout << "*";
		cout << endl;
	}
	for (i = 1;i <= num ;i++)
	{
		for (j = 0;j < num - i;j++)
			cout << " ";
		for (j = 0;j <= 2 * i;j++)
			cout << "*";
		cout << endl;
	}
	
}