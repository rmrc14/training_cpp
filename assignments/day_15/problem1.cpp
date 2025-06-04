// jar full of candies

#include<iostream>

//int candiesJar(int ,int);
int& displayJar(int);
int purchase(int,int&);
using namespace std;
int main()
{
	int num = 100, k = 5;
	int input;
	int jar = num;
	//cin >> input;

	while (num)
	{
		cout << "how many wants : ";
		cin >> input; 
		if (input <= num)
		{
			cout << "purchased\n";
			num = num - input;
		}
		else
			cout << "Invalid";
		cout << "remaning candies are : " << num << endl;
	}


	/*
	while (input)
	{
		int res = purchase(input, displayJar(num));
		if (res == -1)
		{
			cout << "INVALID INPUT" << endl;
			break;
		}
		
	}
	*/


	return 0;
}


int& displayJar(int numCandies)
{
	cout << " jar  : " << numCandies << endl;
	return numCandies;
}
	/*
	char ans;
	cout << " would you like to purchase candies: (y/n) : ";
	cin >> ans;
	switch (ans)
	{
	case 'y':
		
			cout << " jar  : " << numCandies;
			//cout << " the jar has " << numCandies << " left";
		break;
	case 'n':
		cout << " thank you for your patrinage ";
		break;
	default:
		cout << "not required ip";
		break;
	}}
	*/


int purchase(int ip, int& num)
{
	int k = 5;
	
		if (ip <= num)
		{
			num -= ip;
			displayJar(num);
			
		}
		
		if (num<=k) 
		{
			cout << "refilled: ";
			num = 10;//refilled
			displayJar(num);
			
		}
		if(ip>num)
		{
			displayJar(num);
			return -1;
		} // if ip is greater then there are candies
		return num;
}


/*
int candiesJar(int n,int ip)
{
	int k;
	int cap = n;
	if (ip <= n) 
	{
		while (cap && ip <= n)
		{
			cap = cap - ip;
			k = cap;
			if (k <= 5)
			{//refill the jar
				cap = n;

			}
		}
	}
}*/