#include <iostream>


using namespace std;

int main()
{
	int n, n1;
	cout << "enter a start no =" << endl;
	cin >> n;
	cout << "enter stop no.= " << endl;
	cin >> n1;

	for (int i = 1;i <= 10;i++)
	{
		for (int j = n;j <= n1;j++)


		{
			cout << j << "x" << i << "=" << i * j << " \t";
		}

		cout << endl;
	}
	cout << "start table = " << n << endl;
	cout << "end table = " << n1 << endl;

	return 0;


}