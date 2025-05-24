// removed duplicates  { -20,400 ,54,-20,-20 }
#include<iostream>
#define MAX 10
int unique(int[],int);
int unique1(int[], int);
using namespace std;

int main()
{

	int arr[5] = { -20,400 ,54,-20,-20 };
	int size = sizeof(arr) / sizeof(arr[0]);
	unique1( arr,size);

	return 0;
}
int unique(int arr[],int size)
{
	
	for (int i = 0;i < size;i++)
	{
		for (int j = i+1;j < size;j++)
		{
			if (arr[i] == arr[j])
			{
				for (int k = j;k < size - 1;k++)
				{
					arr[k] = arr[k + 1];
				}
				--size;
				j--; // if duplicate present in the next element
			}
		
		}

	}
	for (int i = 0;i < size;i++)
		cout << arr[i] << " ";
	return 0;
}

int unique1(int arr[], int size)
{
	int i, j,k=0;
	for ( i = 0;i < size;i++)
	{
		int c = 0;
		for ( j = i ;j < size;j++)
		{
			if (arr[i] == arr[j])
			{
				c++;
			}
			
		}
		if (c == 1)
		{
			arr[k++] = arr[i];
		}
	}
	for (int i = 0;i < k;i++)
		cout << arr[i] << " ";

	return 0;
}