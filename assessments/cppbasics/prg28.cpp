/*
28.Write a Program to Print a Pyramid Pattern
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
	for (i = 0;i <= num - 1;i++)
	{
		for (j = 0;j < num - i;j++)
			cout << " ";
		for (j = 0;j <= 2 * i;j++)
			cout << "*";
		cout << endl;
	}
	/*for (i = num - 2;i >= 0;i--)
	{
		for (j = 0;j < num - i;j++)
			cout << " ";
		for (j = 0;j <= 2 * i;j++)
			cout << "*";
		cout << endl;
	}*/
}