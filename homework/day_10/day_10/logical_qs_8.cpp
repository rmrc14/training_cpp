/*
8. Energy Crystals
An alien crystal's energy level is always a power of 2 (like 2, 4, 8, 16, 32...).
Given an energy reading, find the highest power of 2 less than or equal to the reading.
*/

#include<iostream>
using namespace std;

int main()
{
	int energyReading, i;
	cout << "Enter the Energy Reading: ";
	cin >> energyReading;
	cout << endl;
	for (i = 1; pow(2, i) < energyReading; i++);
	if (pow(2, i) > energyReading)
		i--;
	cout << "The highest power of 2 less than or equal to the reading is: " << pow(2, i) << endl;
}