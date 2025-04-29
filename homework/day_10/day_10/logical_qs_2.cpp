/*

Logical C++ Questions
2. Odd Coin Counting
In a village fair, you earn odd-numbered coins (1, 3, 5...) from games.
Given your total coin-collection number, find the sum of only the 
odd digits of your coin number to determine your prize.


*/

#include<iostream>

int sumOddDigits(int);
using namespace std;
int main()
{
	int n;
	cout << "Enter the input, coins received during fair:\n ";
	cin >> n;
	cout << endl;
	cout << "Sum of Digits is: \n " << sumOddDigits(n);
	return 0;
}

int sumOddDigits(int n)
{
	int sum = 0, tmp;
	while(n!=0)
	{
		tmp = n % 10;
		if (tmp % 2 != 0)
			sum += tmp;
		n /= 10;
	}
	return sum;
}
