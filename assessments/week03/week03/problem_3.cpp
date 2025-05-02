/*
Problem Statement 3
You are given an array A of size N containing positive integers.
For each element in the array, count the number of elements to its right that are smaller than 
the current element.

Your task is to compute and print a list of counts corresponding to each element.


*/

#include<iostream>
#include<cstring>
#define MAX 100
int leader(int[],int);
using namespace std;

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int* arr = new int[size]; //initialised dynamically

    cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    leader(arr, size);



   // delete[] arr;
	return 0;
}


int leader(int arr[], int size)
{
    
    
    for (int i = 0; i < size ; i++) 
    {
        int count = 0;
        for (int j = i; j <= size - 1; j++) // 
        {

            if (arr[i] > arr[j])        
            {
                count++;

            }
            
        }
        cout << count << " ";
    }
    delete[] arr;
    return 0;
}