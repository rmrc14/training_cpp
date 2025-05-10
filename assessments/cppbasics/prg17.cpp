/*


17.	Write a Program to Check Palindrome numbers

*/

#include <iostream>

bool palindrome(int);

using namespace std;

int main()
{
	int a;
	cin >> a;

	if (palindrome(a))
	{
		cout << "palindrome";
	}
	else
		cout << "not palindrome";


	return 0;

}

bool palindrome(int num)
{
	int tmp=num;
	int sum = 0;
	while (num>0)
	{
		sum = sum*10 + (num % 10);
		num /= 10;

	}
	if (sum == tmp)
		return true;
	else
		return false;
}