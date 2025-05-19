#include<iostream>
#include<cstring>
using namespace std;

int add(int, int);
int add(int, int, int);



int main()
{

	cout << add(10) << endl;
	cout << add(10, 20, 30) << endl;
	

	return 0;
}

int add(int a, int b=100)
{
	return a + b;


}

int add(int a, int b, int c=30)
{

	return a + b + c;
}

