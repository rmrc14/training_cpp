/*
48. Write a Program for Decimal to Binary Conversion
*/

#include <iostream>
#include <cstring>

#define MAX 100

using namespace std;

void decimalTobinary(int);


int main() {
  

    // decimal to binary

    decimalTobinary(5);


    return 0;
}

void decimalTobinary(int n)
{
	int binary[32];  // supports up to 32-bit integers
	int i = 0;

	if (n == 0)    // if zero direct return
	{
		cout << "0";
		return;
	}

	while (n > 0)
	{
		binary[i++] = n % 2; //stores in array
		n = n / 2;
	}
	cout << endl << "decimal to binary: ";
	// print in reverse order
	for (int j = i - 1; j >= 0; j--)   // reverse direction of array
		cout << binary[j];


}