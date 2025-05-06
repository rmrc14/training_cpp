//print armstrong number between 1 to n

#include <iostream>
#include<math.h>
#define MAX 100

bool armstrong(int,int);
int power(int);
using namespace std;

int main()
{
	int  size;
	cout << "number armstrong to be checked: ";
	cin >> size;
	
	for (int i = 1;i <= size;i++)
	{
		//cout << i<<endl;
		if (armstrong(i,power(i)))
		{
			cout << i<<" ";
		}
		
	}
	return 0;
}

bool armstrong(int num,int p)
{
	int sum = 0;
	int r;
	int tmp = num;
	while (num!=0)
	{
		r = num % 10;
		sum =sum+ pow(r,p);
		num /= 10;
	}
	
	if (sum == tmp)
	{
		return true;

	}
	else
		return false;
}

int power(int num)
{
	int digit = 0;
	while (num != 0)
	{
		digit++;
		num /= 10;
	}
	
	return digit;
}