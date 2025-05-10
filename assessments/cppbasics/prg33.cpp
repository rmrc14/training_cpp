/*
33.	Write a Program to Print a Triangle Star Pattern
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
	for(i=0;i<num;i++)
	{
		for (j = 0;j < i;j++)
			cout << "*";
		cout << endl;
	}
}