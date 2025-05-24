#include<iostream>
#include<cstdlib>

using namespace std;
int* func(int a)
{
	static int sum = 0;// use static to avoid dangling point situation
	sum += a;
	cout << "ba os sum =" << (unsigned long int) & sum << endl;
	return &sum;

}

int main()
{
	int* ptr = func(101);//dangling ptr

	cout << *ptr << "address of sum =" << (unsigned long int)ptr << endl;
	*ptr = 202;
	ptr = func(303);
	cout << *ptr << endl;


}