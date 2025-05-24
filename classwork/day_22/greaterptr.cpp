/*
		MAX of 2 numbers using pointers and functions

*/
#include<iostream>

int max2nos(int*, int*);

using namespace std;

int main()
{

	int a=-45, b=-23;

	cout<< max2nos(&a,&b);
	
	return 0;

}


int max2nos(int* x, int* y)
{
	
	return ((*x > *y) ? *x : *y);
	
}