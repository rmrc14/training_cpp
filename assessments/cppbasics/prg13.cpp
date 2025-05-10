/*


13.Write a Program to Find the Sum of the First N Natural Numbers

*/

#include <iostream>

void sumNnatural(int);

using namespace std;

int main()
{
	int a;
	cin>>a;

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