//print armstrong number between 1 to n

#include <iostream>
#include<math.h>
#define MAX 100

int gcd(int, int);
//int power(int);
using namespace std;

int main()
{
	int  n1,n2;
	cout << "number armstrong to be checked: ";
	cin >> n1>>n2;

	int res=gcd(n1, n2);
	cout << res;
	return 0;
}

int gcd(int num1, int num2)
{
	//int sum = 0, size;
	//int gcd = 0;
	if (num1 > num2)//swap
	{
		num1 = num1 + num2;
		num2 = num1 - num2;
		num1 = num1 - num2;
	}
	int r = num1 % num2;
	while (r)
	{
		num1 = num2;
		num2 = r;
		r = num1 % num2;

	}
	return num2;
}
	/*for (int i = size;i >= 2;i--)
	{
		if (num % i == 0 && num2 % i == 0)
		{
			gcd = i;
			return gcd;
		}


	}*/
	
