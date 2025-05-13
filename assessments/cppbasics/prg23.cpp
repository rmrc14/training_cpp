/*

23. Write a Program to Find the Second Smallest Element in an Array

*/

#include <iostream>
#include<math.h>
#include<climits>
//#define MAX 100


void secondSmal(int[], int);
using namespace std;

int main()
{
	int  n1[] = { 4,6 ,1,8,9,-12 };

	int s1 = sizeof(n1) / sizeof(n1[0]);

	secondSmal(n1, s1);

	return 0;
}

void secondSmal(int num1[], int size)
{
	int first , second ;
	first = second = INT_MAX;
	if (size < 2)
	{
		cout << "no second element";
		return;
	}
	for (int i = 0;i < size;i++)
	{
		if (num1[i]<first)
		{
			second = first;
			first = num1[i];
			
		}
		else if (num1[i]<second&& num1[i]!=first)
			second = num1[i];
	}
	if(second==INT_MAX)
	{
		cout << "there is no second smallest element";
		return;
	}
	cout << "first smallest : " << first << "\nsecond smallest : " << second << endl;
}

