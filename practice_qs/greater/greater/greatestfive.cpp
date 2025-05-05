#include<iostream>
#define MAX 5
using namespace std;

int main()
{
	int n1, n2, n3, n4, n5;

	cin >> n1 >> n2 >> n3 >> n4 >> n5;
	

	if (n1 > n2)
	{
		if (n1 > n3)
		{
			if (n1 > n4)
			{
				if (n1 > n5)
				{
					cout << n1 << " is the greatest";
				}
				else
				{
					cout << n5 << " is the greatest";
				}
			}
			else
			{
				cout << n4 << " is the greatest";
			}

				
		}
		else
		{
			cout << n3 << " is the greatest";
		}
	}
	else
	{
		cout << n2 << " is the greatest";
	}


	/*
	int high = n1;
	if (high < n2)
	{
		high = n2;
	}
	if(high<n3)
	{
		high = n3;
	}
	if (high < n4)
	{
		high = n5;
	}
	
	cout << "greatest :" << high;

	*/

	
		
		
	/*
	if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5)
	{
		cout << n1 << " greater than."<<endl;

	}
	else
	{
		if(n2 > n3 && n2 > n4 && n2 > n5)
		{
			cout << n2 << " greater than." << endl;

		}
		else
		{
			if (n3 > n4 && n3 > n5)
			{
				cout<<n3<< " greater than." << endl;
			}
			else
			{
				if (n4 > n5)
				{
					cout << n4 << " greater than." << endl;
				}
				else
				{
					cout<<n5<< " greater than." << endl;
				}
			}
		}
	}

	*/


	/*int arr[MAX];
	for (int i = 0;i < MAX;i++)
		cin >> arr[i];

	for (int i = 0;i < MAX;i++)
		
		*/


	return 0;
}
