
#include <iostream>


using namespace std;

int main()
{
	int countWays = 0;
	cout << "enter a positive integer ";
	cin >> n;

	for (int i = 0;i < n;i++)
		for (int j = i;j < n;j++)
			for (int k = j;j < n;k++)
				for (int l = k;k < n;l++)
				{
					cout << i << "+" << j << "+" << k << "+" << l << endl;
					countWays++;
				}
	if (countWays == 0)
		cout << "no. of ways" << endl
	else
		cout << " "<<countWays;
		return 0;
