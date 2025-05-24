/*
write a program to sort the list in ascending order using pointer
*/

#include <iostream>

using namespace std;


int* allocMem(int*, int);
int* sortAsc(int*, int);
int* getValue(int*,int);
void display(int*,int);
int swap(int&, int&);


int main()
{
	int* ptr = nullptr;
	int n = 5;
	ptr = allocMem(ptr, n);

	ptr=getValue(ptr, n);

	cout << "before sort:\n";

	display(ptr, n);
	sortAsc(ptr, n);

	cout << "\nafter sort: \n";
	display(ptr, n);
	


	return EXIT_SUCCESS;

}

int* allocMem(int* arr, int s)
{
	arr = (int*)malloc(sizeof(int) * s);
	return arr;
}

int* getValue(int* arr,int num)
{


	int* tmp=nullptr;
	tmp = arr;
	

	for (int i = 0;i < num;i++)
	{
		cin >> *arr++;
	}
	arr = tmp;

	return arr;

}

int swap(int& a, int& b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	return 0;


}

int* sortAsc(int* arr, int size)
{
	/*int* tmp=nullptr;
	tmp = arr;
	*/
	

	for (int i = 0;i < size;i++)
	{
		for (int j = 0;j < size;j++)
		{
			if (arr[i] < arr[j])
				swap(arr[j], arr[i]);

		}
	}

	return arr;

}
void display(int* arr, int num)
{ 

	for (int i = 0;i < num;i++)
	{
		cout<< *arr++<<" ";
	}

}