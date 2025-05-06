#include <iostream>
#define MAX 100

bool palindrome(int);
using namespace std;

int main()
{
	int n;
	cin >> n;

	if (palindrome(n))
	{
		cout << "palindrome";
	}
	else
	{
		cout << "not palindrome ";
	}

	return 0;
}
bool palindrome(int num)
{
	int rev=0,r;
	int tmp = num;
	while (tmp != 0)
	{
		r =tmp% 10;
		tmp /= 10;
		rev = rev * 10 + r;



	}
	if (rev == num)
		return true;
	else
		return false;
}