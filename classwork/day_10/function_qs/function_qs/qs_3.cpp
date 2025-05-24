/*
3. Number Mirror
Hint:

Extract the last digit of a number using the modulus operator (n % 10).
Recursion Base Case: When n becomes zero, stop.
Logic: Print the current digit, then recursively call the function with n / 10 to remove the last digit.
Example:
For n = 1234, you will print the digits in reverse order:

4 3 2 1
*/

#include<iostream>
using namespace std;

void reverse_Number(int);

int main()
{
	int n;
	cout << "Enter the number: "<<endl;
	cin >> n;
	cout << endl;
	reverse_Number(n);
	cout << endl;
	return 0;
}

void reverse_Number(int num)
{
	if (num == 0)
		return;
	else
	{
		cout << num % 10;
		reverse_Number(num / 10);
	}
}