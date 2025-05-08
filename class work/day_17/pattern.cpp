
#include<iostream>

//#define MAX 100


void display(int);

using namespace std;
int main()
{
	int num=5;
	

	display(num);

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

		


		cout << endl;

	}
}