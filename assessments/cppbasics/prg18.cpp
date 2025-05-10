/*


19.	Write a Program to Find the Nth Term of the Fibonacci Series

*/

#include <iostream>

bool armstrong(int);

using namespace std;

int main()
{
	int a;
	cin >> a;

	if (armstrong(a))
	{
		cout << "armstrong";
	}
	else
		cout << "not armstrong";


	return 0;

}

bool armstrong(int num)
{
	int tmp = num;
	int sum = 0,digit=0;
	while (tmp > 0)
	{
		tmp /= 10;
		digit ++ ;
	}
	tmp = num;
	while (tmp > 0)
	{
		int r = tmp % 10;
		sum += pow(r, digit);
		tmp /= 10;
		
	}
	if (sum == num)
		return true;
	else
		return false;
}