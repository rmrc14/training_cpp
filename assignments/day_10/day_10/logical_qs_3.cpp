/*
3. Broken Clock
A magical clock only rings when the current minute is a divisor of the hour shown.
Given an hour value, print all minutes when the clock will ring.


*/

#include<iostream>
using namespace std;

int main()
{
	int hour;
	cout << "Enter the hour value : ";
	cin >> hour;
	cout << endl;
	for (int i = 1; i <= 60; i++)
	{
		if (hour % i == 0)
			cout << i << endl;
	}
	return 0;
}