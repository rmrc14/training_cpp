/*
Problem Statement :Write the program for number and star pattern printing given n value.
Input Format : Take N as input of type integer.
Output Format : Print number and star pattern printing in a half diamond

Constraints:
4<=N<=10

Sample Input1:
5
Sample Output1:

*
*1*
*121*
*12321*
*1234321*
*123454321*
*1234321*
*12321*
*121*
*1*
*





*/






#include <iostream>

using namespace std;

int main()
{
	int i, j, l, k, n;
	cout << "enter no.:" << endl;
	cin >> n;
	cout << endl;
	for (i = 0;i <= n;i++)
	{
		for (l = i;l <= i;l++)
			cout << "*";

		for (j = 1;j <= i;j++)
		{
			cout << j;
		}
		for (k = i - 1;k > 0;k--)
		{
			cout << k;
		}
		for (int m = n;m >= n - k;m--)
			cout << "*";
		cout << endl;
	}
	
	for (i = 0;i < n;i++)
	{
		for (l = i;l <= i;l++)
			cout << "*";
		for (k = 1;k < n - i;k++)
		{
			cout << k;
		}
		k--;
		for (j = k - 1;j >= 1;j--)
		{
			cout << j;
		}
		for (l = i - j;l <= i;l++)
			cout << "*";

		cout << endl;
	}

	return 0;
}