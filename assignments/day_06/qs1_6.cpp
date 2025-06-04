/*

6) If a Five digit number is input through the keyboard, write a program to calculate the sum of
its digits.

ex: i/p : 12345

	o/p : sum = 15

	explaination: 1+2+3+4+5 = 15

*/

#include<iostream>

using namespace std;


int main()
{
	int n,sum=0,ans=0;
	cout << "enter the no: " << endl;
	cin >> n;

	for (int i = 0; i<n; i++) //adding the digits together
	{

		sum = n%10;
		ans += sum;
		n /= 10;

	}

	cout << ans;
	
return 0;
}