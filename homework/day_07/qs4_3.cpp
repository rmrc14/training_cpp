/*
3) Program to Check if product of digits of a number at even and odd places is equal.
Input:

2841
Output:
 Yes

Input:

4324
Output:
No


*/


#include <iostream>


using namespace std;

int main()
{
	int num, count = 0, rem, sum = 0, pro1 = 1, pro2 = 1;
	cout << "enter a positive integer ";
	cin >> num;

	while (num != 0)
	{
		rem = num % 10;
		count++;
		if (count % 2 == 0)
			pro1 *= rem;
		else
			pro2 *= rem;



		num /= 10;


	}
	if (count % 2 == 0)
	{
		cout << "product of odd =" << pro1 << endl;
		cout << "product of even =" << pro2 << endl;
	}
	else
	{
		cout << "product of odd =" << pro2 << endl;
		cout << "product of even =" << pro1 << endl;

	}

	if (pro1 == pro2)
		cout << "yes";
	else
		cout << "no";
	return 0;


}