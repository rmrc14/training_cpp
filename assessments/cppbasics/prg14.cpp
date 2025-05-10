/*


14.Write a Program to Find the Factorial of a Number Using Loops

*/

#include <iostream>

void sumNnatural(int);

using namespace std;

int main()
{
	int a;
	cin >> a;

	sumNnatural(a);


	return 0;

}

void sumNnatural(int num)
{

	int sum = 0;
	while (num)
	{
		sum += num;


		num--;
	}

	cout << sum;
}