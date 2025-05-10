/*


19.	Write a Program to Find the Nth Term of the Fibonacci Series

*/

#include <iostream>

int Fibonacci(int);

using namespace std;

int main()
{
	int a;
	cin >> a;

	cout<<"sum : " << Fibonacci(a);


	return 0;

}

int Fibonacci(int num)
{
	int sum = 0;
	int first=0,second=1,res;
	if (num <= 1)
		return 0;
	for (int i = 2; i <= num; i++) {
		res = first + second;
		first = second;
		second = res;
		//cout << res<< " ";
	}

	return res;
}