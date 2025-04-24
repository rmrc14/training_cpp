#include"primefunc.h"


bool isPrime(int n)
{
	bool flag = false;
	if (n <= 1)
		return false;
	for (int itr1 = 2;itr1 <= n / 2;itr1++)
	{
		if (n % itr1 == 0)
		{
			flag = true;
			break;
		}
	}
	if (flag == false)
		return true;
	else
		return false;
}
