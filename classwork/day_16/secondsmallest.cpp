// C++ program to find
// Second smallest elements
#include <climits>
#include <iostream>
using namespace std;

void print2Smallest(int arr[], int n)
{
    int first, second;

    if (n < 2) {
        cout << " Invalid Input ";
        return;
    }

    first = second = INT_MAX;
    for (int i = 0; i < n; i++) 
    {
        // If current element is smaller than first
        // Then update both first and second
        if (arr[i] < first) 
        {
            second = first;
            first = arr[i];
        }

        // If arr[i] is in between first and second
        // Then update second
        else if (arr[i] < second && arr[i] != first)
            second = arr[i];
    }
    if (second == INT_MAX)
        cout << "There is no second smallest element\n";
    else
        cout << " Second smallest element is " << second
        << endl;
}

int main()
{
    int arr[] = { 21, 3, 15, 41, 34, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);

    print2Smallest(arr, n);

    return 0;
}


/*

// second smallest
#include<iostream>
#define MAX 10
using namespace std;

int main()
{

	int arr[5] = { 2,400 ,54,45,89 };
	int  tmp;
	
	
	for (int i = 0;i < 5;i++)        //ascending
	{
		for(int j=0;j<5-1;j++)
		{
			if (arr[j] > arr[j+1])   // check if it goes out of bound
			{
				tmp=arr[j+1] ;
				arr[j+1] = arr[j];
				arr[j] = tmp;
			}

		}
			

	}
	for (int i = 0;i < 5;i++)
		cout << arr[i]<<" ";
	cout<<" \n" << arr[1] << " = second smallest";
	
	return 0;
}

*/