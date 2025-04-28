/*
Problem 1: Print Numbers from N to 1
Problem Statement:
Write a recursive function to print numbers from N down to 1.

*/

/*
Problem 2: Sum of First N Natural Numbers
Problem Statement:
Write a recursive function to find the sum of the first N natural numbers.

*/

/*
Problem 3: Find nth Fibonacci Number
Problem Statement:
Write a recursive function to return the nth Fibonacci number.
(Fibonacci series: 0, 1, 1, 2, 3, 5, 8, ...)


*/
/*

Problem 4: Count Number of Zeros in a Number
Problem Statement:
Write a recursive function to count the number of zeros in an integer.
i/p: 102040
o/p: Number of zeros in 102040 is 3

*/
#include<iostream>

int displaynum(int);
int sumnatural(int);
int fib(int);
int countZeros(long long int);

using namespace std;

int main()
{
	int num;
	cout << "enter a positive number: \n";
	cin >> num;

	cout << "displays the n numbers till " << num<<endl;
	displaynum(num);
	cout << "displays the sum of n numbers given" << endl;
	int ret= sumnatural(num);
	cout << ret<<endl;
	cout << "gives the fibonacci sequence :" << endl;
	for (int i = 0; i <= num;i++)
	{
		ret = fib(i);
		cout << ret << " ";
	}

	// for displaying the count of zeros 
	long long int num1;
	//int count1=0;
	cout << "enter number for the zeros present in it to be counted: "<<endl;
	cin >> num1;
	ret= countZeros(num1);
	cout << "the count of 0 : " << ret;


	return 0;

}
int displaynum(int n)
{
	if (n >= 1)
	{
		cout << n << endl;
		return displaynum(n - 1);
		
	}

	else
		return n;
	cout << n << endl;
}


int sumnatural(int n)
{
	if (n <= 1)
		return 1;
	else
		return n + sumnatural(n - 1);

}

int fib(int n)
{
	if (n <= 1)
		return n;
	else
		return fib(n-1) + fib(n - 2);

}
int countZeros(long long int n)
{

	int tmp = n % 10;
	int count = 0;
	
	if (n == 0)
		return 0;

	if (n % 10 == 0)
		return 1 + countZeros(n / 10);
	else
		return countZeros(n / 10);

}