/*
6. Spaceship Countdown
Before launching, a spaceship performs a countdown from a given number n to 1.
Write a program to simulate the countdown using a while loop.
*/

#include<iostream>
using namespace std;

int main()
{
	int countDown;
	cout << "Enter the start of the countdown: ";
	cin >> countDown;
	cout << endl;
	cout << "Count Down to launch : " << endl;
	while (countDown >=0)
	{
		cout << countDown << endl;
		countDown--;
	}
	cout << "launch initiated ....." << endl;
	return 0;
}