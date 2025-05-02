/*
Problem Statement 6
You are given an array arr[] of size N containing positive integers. 
Your task is to reverse every sub-array of size K.

If the number of elements left at the end is less than K, reverse all of them as is.

*/

#include<iostream>
#define MAX 100
int swap1(int[], int,int);
using namespace std;

int main() {
    int size,k,res;
    cout << "Enter size of array: ";
    cin >> size;

    int* arr = new int[size]; //initialised dynamically

    cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "enter the size of k array:" << endl;
    cin >> k;

    res=swap1(arr, size,k);   // func call

    //delete[] arr;
    return 0;
}

int swap1(int arr[], int size, int k)
{   
    int sw[MAX];
    for (int i = 0;i < size;i++)
    {
        if (k < arr[i + k])
        {
            for (int j = i;j < k;j++)
            {
                sw[i] = arr[i+k];
                arr[i] = sw[j];
            }
            
        }
        

    }
    
    return 0;
}