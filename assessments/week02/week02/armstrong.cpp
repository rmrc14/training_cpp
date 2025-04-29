/*
Objective: Write a program to check if a given number is an Armstrong number

Requirements:

*Use a loop to calculate the sum of cubes of the digits of the number

*Compare the sum with the original number to determine if it's an Armstrong number

Example:
Input: 153
Output: Armstrong number
explanation:
(since (1^3 + 5^3 + 3^3 = 153))

370
407
*/


#include<iostream>
using namespace std;





int main()
{
	int num, rem,val=0,tmp;


	cout << "enter a num to be checked as armstrong no. 3 digits" << endl;
	cin >> num;
	tmp = num; //stores temporarily num value
	int digits = 0;
	while (tmp != 0) {
		tmp /= 10;
		digits++;
	}
	tmp = num;
	while (tmp != 0)// while used to get individual digits of the given no.
	{
		

		rem = tmp % 10;
		int power = 1;
		for (int i = 0; i < digits; i++) 
		{
			power *= rem;  // Multiply rem by itself 'digits' times
		}
		val += power;
		tmp /= 10;
	
		

	}
	if (num == val)
		cout << num << " is armstrong no" << endl;
	else
		cout << num << " is not a armstrong no" << endl;



	return 0;
}
