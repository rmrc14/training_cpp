/*	


1. Write a C++ Program to Check Whether a Number is a Positive or Negative Number


*/
#include <iostream>

void numPosNeg(int);

using namespace std;

int main()
{
	int n;
	cin>>n;

	numPosNeg(n);

	


	return 0;

}

void numPosNeg(int num)
{
	if(num>=0)
	{
		cout << "positive";
	}
	else 
	{
		cout << "negative";
	}
	
}