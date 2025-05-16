/*
		Sum of array using pointers and functions

*/
#include<iostream>

int sumArr(int*, int);

using namespace std;

int main()
{

	int a[] = { 2,3,4,5 };
	int size = sizeof(a)/sizeof(a[0]);
	cout<<sumArr(a, size);
	return 0;

}


int sumArr(int* ptr, int n)
{
	int sum = 0;

	/*for (int i = 0;i < n;i++)
		sum += ptr[i];*/

	for (int i = 0;i < n;i++)
		sum += *ptr++;

	return sum;
}