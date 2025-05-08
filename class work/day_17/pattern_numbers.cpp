#include<iostream>

void display(int);
void pascaltriangle(int);


using namespace std;
int main()
{
	int num = 5;


	display(num);
	cout << endl;
	pascaltriangle(num);
	cout << endl;
	return 0;
}



void display(int n)
{
	int i, j, c = 1;
	for (i = 0; i < n; i++)
	{

		for (j = 0;j < i;j++)
			cout << c++;

		cout << endl;

	}
}

void pascaltriangle(int n)
{
	int i, j, c = 1;
	for (i = 0; i < n; i++)
	{

		for (j = 1;j < 2*n+1;j++)
			cout << j;

		cout << endl;

	}
}