#include<iostream>

int hexadecimal(int);
using namespace std;

int main()
{
	// generic formula 
	int n, base;
	cout << "num: ";
	cin >> n;
	cout << endl;


	int res = hexadecimal(n);
	cout << "res = " << res;

	return 0;
}

int hexadecimal(int num)
{
	int r;
	int place = 0;
	int sum = 0;
	while (num)
	{
		r = num % 16;
		sum += r * pow(10, place);
		num /= 16;
		place++;


	}
	return sum;

}