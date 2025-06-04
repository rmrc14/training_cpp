/*
9. Magic Multiplying Puzzle
You find a magic box that multiplies the digits of a number you enter.
If the final product of digits is a prime number, the box opens.
Write a program to simulate the box opening logic
*/
#include<iostream>
using namespace std;

bool checkPrime(int);

int main()
{
	int num, prod = 1;
	cout << "Enter the number: ";
	cin >> num;
	
	while (num != 0)
	{
		prod *= (num % 10);
		num /= 10;
	}
	if (checkPrime(prod))
		cout << "Box Opens" << endl;
	else
		cout << "Box Does Not Open" << endl;

}

bool checkPrime(int n)
{
	for (int i = 2; i <= (n / 2); i++)
	{
		if (n % i == 0) //same logic as divisor where half of the dividend is checked for factors 
			return false;// if not found returns true. 
	}
	return true;

}