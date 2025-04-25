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


#include<iostream>

using namespace std;





int main()
{
	int num;
	 
	cout << "enter a num (4<=N<=10)" << endl;
	cin >> num;

	for (int i = 0; i <=num ;i++)
	{
		for (int j = 0 ; j <= i ; j++)
		{
			if (j == 0)
				cout << "*";
			else
				cout << j;

		}
		
		cout << endl;

		

	}

	for (int i = 0; i < num;i++)
	{    
		for (int k = 0;k < num-i-1;k++)
		{
			if (k == 0)
				cout << "*";
			else
				cout << k;
		}
		for (int j = num - i ; j >= 0; j--)
		{
			if (j == 0)
				cout << "*";
			else
				cout << j;

		}
		cout << endl;




	}





	return 0;

}