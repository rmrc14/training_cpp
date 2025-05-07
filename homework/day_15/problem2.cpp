// jar full of candies

#include<iostream>
#define N 10
#define K 5
int displayJar(int);
bool purchase(int);

using namespace std;

int main()
{
	int ip;
	bool flag = true;
	while (flag)
	{
		cin >> ip;
		displayJar(N);
		
		flag = purchase(ip);
		cout << "wait";
		
	}
	cout << "exited loop";

	return 0;
}


int displayJar(int numCandies)
{
	cout << " jar  : " << numCandies << endl;
	return numCandies;
}
bool purchase(int input)
{
	if (num >= k)
	{
		if (ip <= num)
		{
			num -= ip;
			displayJar(num);
			return num;
		}
		else
		{
			displayJar(num);
			return -1;
		} // if ip is greater then there are candies
	}
	else
	{
		cout << "refilled: ";
		num = 10;//refilled
		displayJar(num);
		return num;
	}

}