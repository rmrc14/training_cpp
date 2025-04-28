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


3. Check if a Year is a Leap Year
Problem:
Write a function to check whether a given year is leap year or not.

Hint:
Leap year if:

Divisible by 4 and not divisible by 100, or
Divisible by 400.
Use logical operators && and ||.


Find the Second Last Digit of a Number
Problem:
Given a positive integer, find its second last digit.

Hint:

First, divide number by 10 (n/10) to remove the last digit.
Then get last digit of the result using modulo (% 10).
*/


#include<iostream>


int add(int , int );
int num_of_digits(int );
int findmiddle_num(int,int,int);
void leapYear(int);
int second_lastdigit(int);
//int sum_digits_single(int);

//int fib(int);
//int countZeros(long long int);

using namespace std;

int main()
{
	int num1, num2, num3,res,yr;
	cout << "enter the 3 integers to check the middle no:" << endl;
	cin >> num1 >> num2 >> num3;
	res = findmiddle_num(num1, num2, num3);
	cout << "result :" << res << endl;


	cout << "enter the year to be checked\n";
	cin >> yr;
	leapYear(yr);

	// 2nd last digit
	cout << second_lastdigit(yr)<<endl;



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
/*int sum_digits_single(int n)
{
	if (n < 10) {
		return n;
	}
	else {
		int sum = 0;

		// Calculate sum of digits of the current number
		while (n > 0) {
			sum += n % 10;  // Add the last digit to sum
			n /= 10;         // Remove the last digit
		}
	return 0;

}*/





// functionalities
int add(int a, int b)
{

	return a + b;
}

int num_of_digits(int n) // gets num of digits

{
	int array[10] = { 0 }, count = 0;
	
	while(n!=0)
	{
		int tmp = n % 10;
		//array[count] = tmp;
		count++;
		n /= 10;
	}

	return count;
}

void leapYear(int year)
{

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		cout<<"its leap year\n ";
	else
		cout<<"its not leap year\n";

}

int second_lastdigit(int n)
{
	n /= 10;
	return n % 10;

}