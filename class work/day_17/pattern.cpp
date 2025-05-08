
#include<iostream>

//#define MAX 100


void display(int);
void display2(int);
void display3(int);
void display4(int);


using namespace std;
int main()
{
	int num=5;
	

	display(num);
	cout << endl;
	display2(num);
	cout << endl;
	display3(num);
	cout << endl;
	display4(num);
    return 0;
}



void display(int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		
		for (j = 1;j < n - i;j++)
			cout << " ";
		for (j = 0;j <= i ;j++)
			cout << "* ";

		/*
		for (j = 1;j < n - i;j++)
			cout << " ";
		for (j = 0;j <= 2*i*1 ;j++)
			cout << "* ";
		*/


		cout << endl;

	}
}


void display2(int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{

		for (j = 1;j < n - i;j++)
			cout << " ";
		for (j = 0;j <= 2*i ;j++)
			cout << "*";

		cout << endl;

	}
}

void display3(int n)
{
	int i, j;
	for (i = n-1; i > 0; i--)
	{
		for (j = 1;j < 2 * (n - i) - 1;j++)
			cout << " ";
		for (j = 0;j <= 2 * i ;j++)
			cout << "*";

		
		

		for (j = 1;j <= 2 * i ;j++)
			cout << "*";

		cout << endl;
		
	}


	for (i = 0; i < n; i++)
	{
		for (j = 1;j < 2 * (n - i) - 1;j++)
			cout << " ";
		for (j = 0;j <= 2 * i;j++)
			cout << "*";




		for (j = 1;j <= 2 * i;j++)
			cout << "*";

		cout << endl;

	}
}


void display4(int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		
		for (j =0;j < 2*i;j++)
			cout << " ";
		for (j = 1;j < 2 * (n - i);j++)
			cout << "* ";
		
		




		

		cout << endl;

	}


	for (i = 0; i < n; i++)
	{
		for (j = 1;j < 2 * (n - i) - 1;j++)
			cout << " ";
		for (j = 0;j <= 2 * i;j++)
			cout << "* ";




		/*for (j = 1;j <= 2 * i;j++)
			cout << "*";*/

		cout << endl;

	}
}