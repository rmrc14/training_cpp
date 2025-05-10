/*

20. Write a Program to Calculate the Greatest Common Divisor of Two Numbers

*/



#include <iostream>
#include<math.h>
#define MAX 100

int gcd(int, int);

using namespace std;

int main()
{
	int  n1, n2;
	
	cin >> n1 >> n2;

	int res = gcd(n1, n2);
	cout << res;
	return 0;
}

int gcd(int a, int b)
{
	
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}

	return a;
}