#include <iostream>
#define MAX 100

bool palindrome(int[],int);
using namespace std;

int main()
{
	int n[MAX],size;
	cout << "size: ";
	cin >> size;
	for(int i=0;i<size;i++)
		cin >> n[i];

	if (palindrome(n,size))
	{
		cout << "palindrome";
	}
	else
	{
		cout << "not palindrome ";
	}

	return 0;
}

bool palindrome(int num[], int size)
{
	int r;

	
	for (int i = 0;i < size;i++)
	{
		int tmp = num[i];
		int rev = 0;  // has to initiallise rev after each iteration
		while (tmp != 0)
		{
			r = tmp % 10;
			tmp /= 10;
			rev = rev * 10 + r;

		}
		if (rev != num[i])
			return false;
		
	}

	return true;
}

/*bool palindrome(int num[], int size)
{
	int rev = 0, r;
	int tmp = num[size];
	int right = size-1;
	for(int i=0;i<size/2;i++)
	{
		if (num[i] != num[right])
			return false;
		right--;
	}
	
	return true;
	
}*/