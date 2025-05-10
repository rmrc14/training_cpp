/*


16.Write a Program to Find a Leap Year or Not

*/

#include <iostream>

bool prime(int);

using namespace std;

int main()
{
	int a;
	cin >> a;

	if (prime(a))
	{
		cout << "prime";
	}
	else
		cout << "not prime";


	return 0;

}

bool prime(int num)
{
	if (num <= 1)
		return false;


	for (int i = 2; i*i <= num ;i++)
	{
		if (num % i == 0)
			return false;
	}
		return true;
}