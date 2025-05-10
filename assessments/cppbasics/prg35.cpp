/*
35.Write a Program to Print the Given String in Reverse Order
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
	int i, j, k = 1;
	for (i = 0;i < num;i++)
	{
		for (j = 0;j < i;j++)
			cout << k++;
		cout << endl;
	}
}