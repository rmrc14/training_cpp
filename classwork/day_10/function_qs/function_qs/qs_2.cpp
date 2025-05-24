/*
2. Tower of Oddity
Hint:

You are allowed to visit only odd-numbered floors.
Start from floor 1, and recursively call the function, adding 2 to the current floor each time, until it exceeds n.
Recursion Base Case: If the floor is greater than n, stop.
Example:
For n = 10, the function should print:

1, 3, 5, 7, 9
Each time, increment by 2 to skip even-numbered floors.
*/

#include<iostream>
using namespace std;

void oddFloorVisit(int, int);

int main()
{
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	cout << endl;
	oddFloorVisit(n, 1);
	cout << endl;
	return 0;
}

void oddFloorVisit(int n, int floor)
{
	if (floor > n)
	{
		return;
	}
	else
	{
		cout << floor << ", ";  // an extra comma nead to be rectified in the op
		oddFloorVisit(n, floor + 2);
	}
}