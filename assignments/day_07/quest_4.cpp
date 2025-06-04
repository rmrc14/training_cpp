#include <iostream>


using namespace std;

int main()
{
	int num, rem, sum = 0, pro = 1;
	cout << "enter a positive integer ";
	cin >> num;

	while (num != 0)
	{
		rem = num % 10;
		sum += rem;
		if (rem != 0)
			pro *= rem;
		num /= 10;


	}
	cout << "sum =" << sum;
	cout << "product =" << pro;

	return 0;


}