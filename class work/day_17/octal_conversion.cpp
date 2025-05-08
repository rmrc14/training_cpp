#include<iostream>


void octalTodecimal(int);
void binaryTodecimal(int);
void decimalTobinary(int);
//void decimalTooctal(int);


using namespace std;
int main()
{
	int x = 67;

	octalTodecimal(x);
	cout << endl;

	//binary to decimal
	int bin = 101;
	binaryTodecimal(bin);

	// decimal to binary
	
	decimalTobinary(5);


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

void decimalTobinary(int)
{



}