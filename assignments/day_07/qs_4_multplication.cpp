#include <iostream>


using namespace std;

int main()
{
	int n, n1;
	cout << "enter a start no =" << endl;
	cin >> n;
	cout << "enter stop no.= " << endl;
	cin >> n1;

	for (int i = n;i <= n1;i++)
	{
		for (int j = 1;j <= 10;j++)
		{
			cout << i << "x" << j << "=" << i * j << endl;

		}

		cout << "=============" << endl;
	}
	cout << "start table = " << n << endl;
	cout << "end table = " << n1 << endl;

	return 0;


}