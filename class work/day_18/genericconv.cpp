#include<iostream>

int genericconv(int, int,int);
using namespace std;

int main()
{
	// generic formula 
	int n,base;
	cout << "num: ";
	cin >> n;
	cout << endl;
	cout << "base:";
	cin >> base;
	
	int res=genericconv(n, base,int);
	cout << "res = " << res;

	return 0;
}

int genericconv(int num, int base)
{
	int r;
	int place = 0;
	int sum = 0;
	while (num)
	{
		r = num % base;
		sum += r * pow(10, place);  // this places the value in ones place onwards
		num /= base;
		place++;


	}
	return sum;

}