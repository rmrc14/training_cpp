/*

22. Write a Program to Find the Smallest and Largest Element in an Array

*/

#include <iostream>
#include<math.h>
#define MAX 100


void largeSmal(int[],int);
using namespace std;

int main()
{
	int  n1[MAX] = {4,6 ,1,8,9,-12};

	int s1 = sizeof(n1) / sizeof(n1[0]);

	largeSmal(n1, s1);
	
	return 0;
}

void largeSmal(int num1[],int size)
{
	int max = num1[0];
	int min = num1[0];
	for (int i = 0;i < size;i++)
	{
		if (max < num1[i])
			max = num1[i];
		else if (min > num1[i])
			min = num1[i];
	}
	
	cout << "max : " << max << "\nmin : " << min<<endl;
}

