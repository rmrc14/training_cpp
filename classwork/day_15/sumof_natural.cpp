#include <iostream>
#define MAX 100

int sum_natural(int);
using namespace std;

int main()
{
	int n;
	cin >> n;

	cout<<sum_natural(n);
	
	return 0;
}
int sum_natural(int n)
{
	int sum = 0;
	for(int i=1;i<=n;i++)
		sum += i;
	return sum;


}