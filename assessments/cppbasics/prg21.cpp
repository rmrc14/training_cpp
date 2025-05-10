/*

21. Write a Program to Calculate the Lowest Common Multiple (LCM) of Two Numbers
*/

#include <iostream>
#include<math.h>
#define MAX 100

int gcd(int, int);
int lcm(int, int);
using namespace std;

int main()
{
	int  n1, n2;

	cin >> n1 >> n2;

	int res = gcd(n1, n2);
	cout << res;
	return 0;
}

int gcd(int num1, int num2)
{

	while (num2>0)
	{
		int r = num2;
		num2 = num1 % num2;
		num1 = r;
	}
	return num1;
}


int lcm(int a, int b) 
{
	return (a * b) / gcd(a, b);
}