#include<iostream>
#include<string.h>
#include<string>
#include "ArrayManipulations.h"

using namespace std;



ArrayManipulations::ArrayManipulations(int a[], int s)
{

	size = s;
	arr = new int[size];
	arr = a;

}

int* ArrayManipulations::ascSort()
{

	int i = 0;
	int tmp;
	for (i = 0;i < size;i++)
	{
		for (int j = 0;j < size;j++)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}

	}


	return arr;

}
void ArrayManipulations::displayAsc()
{

	ascSort();


	for (int i = 0;i < size;i++)
	{
		cout << arr[i] << " ";

	}
	cout << endl;
}



int* ArrayManipulations::descSort()
{

	int i = 0;
	int tmp;
	for (i = 0;i < size;i++)
	{
		for (int j = 0;j < size;j++)
		{
			if (arr[i] < arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}

	}


	return arr;

}
void  ArrayManipulations::displayDesc()
{
	descSort();

	for (int i = 0;i < size;i++)
	{
		cout << arr[i] << " ";

	}
	cout << endl;
}


int ArrayManipulations::biggestElement()
{

	int i = 0;
	int max = arr[i];
	for (i = 0;i < size;i++)
	{

		if (max < arr[i])
			max = arr[i];

	}
	return max;
}
void ArrayManipulations::dispBiggest()
{
	cout << "biggest element in the array is: " << biggestElement() << endl;

}
