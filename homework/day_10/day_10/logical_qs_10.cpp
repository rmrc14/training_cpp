/*
10. The Doubling Machine
A strange machine doubles a number every time you press a button.
Starting from 1, you press the button n times.
Find the sum of all numbers you see after each press.
*/

#include<iostream>
using namespace std;

int main()
{
	int n, sum = 0, j = 1;
	cout << "Enter the number of times the button is pressed: " << endl;
	cin >> n;
	cout << endl;
	for (int i = 1; i <= n; i++)
	{
		j *= 2;
		cout << j << endl;
		sum += j;
	}
	cout << "Sum is: " << sum << endl;
	return 0;
}