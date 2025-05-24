/*

find the nth no if both digits should be prime and
eg n=10  o/p 33
n=21    o/p  222

*/



#include<iostream>
#include"primefunc.h"
int getDigits(int);

using namespace std;



int main()
{
	int num, count;
	cout << "Enter the number: ";
	cin >> num;
	/*
	bool ret = isPrime(num);
	if (ret == true)
		cout << "Given number: " << num << " is a prime number" << endl;
	else
		cout << "Given number: " << num << " is not a prime number" << endl;
	*/
	count = 0;
	int i = 1;
	while (true) {
		if (getDigits(i++)) {
			cout << "Counted" << endl;
			count++;
			if (count == num)
				break;
		}
		else
			cout << "not counted" << endl;
	}
	cout << "I = " << i - 1 << endl;
	return 0;
}


int getDigits(int num)
{
	int r;
	int countDigits = 0;
	int countNPrime = 0;
	while (num)
	{
		r = num % 10;
		cout << "r = " << r << endl;
		if (isPrime(r) == true) {
			cout << r << " is prime digit" << endl;
			countNPrime++;
		}
		num /= 10;
		countDigits++;
	}


	if (countDigits == countNPrime)
		return 1;
	else
		return 0;
}

