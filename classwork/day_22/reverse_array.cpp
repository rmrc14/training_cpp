/*
		reverse an array using pointers and functions
*/
#include<iostream>

int reverse(int*, int);
void displayarr(int*,int);
int reverse1(int* ptr, int n);

using namespace std;

int main()
{

	int a[] = { 1,2,3,4,5,6 };
	int size = sizeof(a) / sizeof(a[0]);
	cout << "before:" << endl;
	displayarr(a, size);


	 reverse1(a, size);

	 cout << "\nafter:" << endl;
	 displayarr(a,size);


	return 0;

}


int reverse(int* ptr, int n)
{
		
	for (int i = 0;i < n/2;i++)
	{
		
			int tmp = ptr[i];
			ptr[i] = ptr[n-1-i];
			ptr[n-1-i] = tmp;
		
	}
	
	

	return 0;
}

void displayarr(int* arr, int n)
{

	for (int i = 0;i < n;i++)
		cout << arr[i] << " ";


}

int reverse1(int* ptr, int n)
{
	int t;
	int* start = nullptr;
	int* end = nullptr;

	start = ptr;
	end = ptr + (n - 1);

	while (start < end)
	{
		//swap
		t = *start;
		*start = *end;
		*end = t;

		//counter
		start++;
		end--;
	}
	return 0;

}