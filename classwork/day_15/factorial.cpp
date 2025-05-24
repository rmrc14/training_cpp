#include <iostream>
#define MAX 100

int factorial(int);
using namespace std;

int main()
{
	int n;
	cin >> n;

	cout << factorial(n);

	return 0;
}
int factorial(int n)
{
	int prod = 1;

	for (int i = 1;i <= n;i++)
		prod *= i;
	
	return prod;


}