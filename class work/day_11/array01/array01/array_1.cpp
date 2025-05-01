/*
Q1.
Problem Statement:
Given an unsorted array a of size N of non-negative integers,
find a continuous sub-array which adds to a given number sum.

Input Format:
The first line contains an integer, denoting the size of the array.
The second line contains integers denoting the elements
of the array.
The last line contains an integer, denoting the sum.

Constraints
1<= n<=100
1<=arr<= 1000, where arr is the ith element of the array.
1<= n<=100000

Output Format:
The output line contains integers denoting the indexes.

TESTCASE 1:
Input:
7
[1, 4, 0, 0, 3, 10, 5]

sum = 7
Output:
Sum found between indexes 1 and 4

TESTCASE 2:
Input:
2
[1, 4]
sum = 0
Output:
No subarray found
*/


#include<iostream>
using namespace std;

int main() 
{
	int size, sum;
	cout << "Enter size of array: ";
	cin >> size;

	int* arr = new int[size];

	for (int i = 0;i < size;i++) {
		
		cin >> arr[i];
	}

	cout << "Enter sum: ";
	cin >> sum;

	for (int i = 0;i < size;i++) {
		for (int j = i + 1;j < size;j++) {
			if (arr[i] + arr[j] == sum) {
				cout << "Sum found between indexes " << i << " and " << j << ".";
				return 0;
			}
		}
	}
	cout << "No subarray found";
	return 0;
}