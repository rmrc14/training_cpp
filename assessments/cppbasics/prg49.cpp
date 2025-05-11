/*
49. Write a Program for Decimal Octal Conversion
*/

#include <iostream>
#include <cstring>

#define MAX 100

using namespace std;

void decimalTooctal(int);


int main() {


	// decimal to octal

	decimalTooctal(55);


	return 0;
}

void decimalTooctal(int n)
{

	int octal[32];
	int i = 0;

	if (n == 0)    // if zero direct return
	{
		cout << "0";
		return;
	}

	while (n > 0)
	{
		octal[i++] = n % 8; //stores in array
		n = n / 8;
	}
	cout << endl << "decimal to octal: ";
	// print in reverse order
	for (int j = i - 1; j >= 0; j--)   // reverse direction of array
		cout << octal[j];

}