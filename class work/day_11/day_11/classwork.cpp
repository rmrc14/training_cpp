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


 Q. Check whether a given number can be expressed as the sum of two prime number

i/p
Enter a positive integer: 34
Output
34 = 3 + 31
34 = 5 + 29
34 = 11 + 23
34 = 17 + 17
NoofWays = 4



*/

#include <iostream>
#define MAX 100
using namespace std;

bool isPrime(int);

int main()
{
	int num, count = 0;
	cout << "Enter n value: ";
	cin >> num;

	int arr[MAX];
	count = 0;
	for (int i = 1;i <= num;i++)
	{
		if (isPrime(i)) {
			arr[count++] = i;
		}
	}


	for (int i = 0;i < count;i++) {

		cout << arr[i] << endl;
	}

	for (int i = 0;i < count;i++)
	{
		for (int j = i;j < count;j++)
		{
			if ((arr[i] + arr[j]) == num)
			{
				cout << arr[i] << " + " << arr[j] << " = " << num << endl;
			}
		}
	}

	return 0;
}

bool isPrime(int num)
{
	bool flag = false;

	if (num <= 1) {
		return false;
	}
	for (int i = 2;i <= num / 2;i++)
	{
		if (num % i == 0)
		{
			flag = true;
			break;
		}
	}

	if (flag == true)
		return false;
	else
		return true;
}


//find the nth number made up of 1,4,6,9 digits only 