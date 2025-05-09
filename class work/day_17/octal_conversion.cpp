#include<iostream>


void octalTodecimal(int);
void binaryTodecimal(int);
void decimalTobinary(int);
void decimalTooctal(int);


using namespace std;
int main()
{
	int x = 67;
	cout << "octal :" << x;
	octalTodecimal(x);
	cout << endl;

	//binary to decimal
	int bin = 101;
	binaryTodecimal(bin);

	// decimal to binary
	
	decimalTobinary(5);

	// decimal to octal

	decimalTooctal(55);



	return EXIT_SUCCESS;
}

void octalTodecimal(int num)
{
	int place = 0, digits = 0,sum=0;
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
void binaryTodecimal(int num)
{
	int place = 0, digits = 0, sum = 0;
	int tmp = num;
	while (num)
	{
		place = num % 10;
		num /= 10;
		sum += place * (pow(2, digits));
		digits++;

	}


	cout << " bin to decimal =" << sum;



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
	cout << endl << " decimal to binary: ";
	// print in reverse order
	for (int j = i - 1; j >= 0; j--)   // reverse direction of array
		cout << binary[j];


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
	cout << endl << " decimal to octal: ";
	// print in reverse order
	for (int j = i - 1; j >= 0; j--)   // reverse direction of array
		cout << octal[j];

}