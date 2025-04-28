/*
1. Find the Middle Value Among Three Numbers
Problem:
Write a function that takes three integers and returns the middle one (not maximum, not minimum).

Hint:
Use basic comparisons (>, <) between the three numbers.
Check conditions like:

If a > b and a < c or a < b and a > c, then a is the middle.

*/

/*

2. Sum of Digits Until a Single Digit
Problem:
Take an integer and keep adding its digits recursively until only one digit remains.

Hint:

Use a function that calculates sum of digits.
If result >= 10, call the same function again.

*/


#include<iostream>

int findmiddle_num(int,int,int);
int sum_digits_single(int);
//int fib(int);
//int countZeros(long long int);

using namespace std;

int main()
{
	int num1, num2, num3,res;
	cout << "enter the 3 integers to check the middle no:" << endl;
	cin >> num1 >> num2 >> num3;
	res = findmiddle_num(num1, num2, num3);
	cout << "result :" << res << endl;




	return 0;
}


int findmiddle_num(int a, int b, int c)
{
	if ((a > b && a < c) || (a<b && a>c))
		return a;
	else if ((b > a && b < c) || (b<a && b>c))
		return b;
	else
		return c;


}
int sum_digits_single(int)
{



}