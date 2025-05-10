/*

24.Write a Program to Calculate the Sum of Elements in an Array

*/

#include <iostream>
#include<math.h>



int sum_aray(int[], int);
using namespace std;

int main()
{
	int  n1[] = { 4,6 ,1,8,9,-12 };

	int s1 = sizeof(n1) / sizeof(n1[0]);

	cout<<sum_aray(n1, s1);

	return 0;
}

int sum_aray(int num1[], int size)
{
	int sum = 0;
	for (int i = 0;i < size;i++)
	{
		sum += num1[i];
	}

	return sum;
}

