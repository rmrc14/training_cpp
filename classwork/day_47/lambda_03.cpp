
#include<iostream>
using namespace std;

int main()
{


	auto oddeven = [](int n)
		{ for (int i = 0;i < n;i++)
	{
		if (i % 2 == 0)
			cout << "even " << i << endl;
		else
			cout << "odd " << i << endl;
	}
		};


	oddeven(5);
	return 0;

}