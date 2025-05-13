/*
46. Write a Program for Octal to Decimal Conversion

*/

#include <iostream>
#include <cmath>
using namespace std;

void octalTodecimal(int);

int main()
{
	int x = 67;
	cout << "octal :" << x;
	octalTodecimal(x);
	cout << endl;


    return 0;
}

void octalTodecimal(int num)
{
	int place = 0, digits = 0, sum = 0;
	int tmp = num;
	while (num)
	{
		place = num % 10;
		num /= 10;
		sum += place * (pow(8, digits));
		digits++;

	}


	cout << " decimal =" << sum;

}