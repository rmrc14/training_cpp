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

void pascaltriangle(int n)  //(n+1)C(r) = (n)C(r - 1) + (n)C(r)  
								//nCr = n! / (r! * (n-r)!)   and C(n,k)=C(n,n−k)
{
	for (int i = 0; i < n; i++) {
		// Print spaces 
		
		for (int space = 0; space < n - i - 1; space++)
			cout << "  ";
		int res = 1;  // First element of every row is 1

		for (int k = 0; k <= i; k++) {
			// Print current res
			cout << res << "   ";

			// Compute next coefficient using property:
			// C(i, k+1) = C(i, k) * (i - k) / (k + 1)
			//res = res * (i - k) / (k + 1);

			res *= (i - k);
			res /= (k + 1);
		}

		cout << endl;
		
	}
	

}