/*
  problem 5:  LEADER 


You are given an array A of positive integers. Your task is to find and print all the leaders in the array.

An element is considered a leader if it is greater than all elements to its right. The rightmost element is always considered a leader.

Return the list of leaders in the same order as they appear from right to left in the original array.

*/



#include<iostream>

int leader(int [], int);
using namespace std;

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int* arr = new int[size]; //initialised dynamically

    cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    leader(arr, size);   // func call

    //delete[] arr;
    return 0;
}

int leader(int arr[],int size)
{
    int maxFromRight = arr[size - 1];
    cout << arr[size-1] << " "; //as the rightmost element is always the leader prints it first

    for (int i = size - 2; i >= 0; i--) // size-2  --- dont require or (exclude) - the leader
    {
        if (arr[i] >= maxFromRight)        // first compares to the leader then continues the loop
        {
            cout << arr[i] << " ";
            maxFromRight = arr[i];
        }
    }

    delete[] arr;
    return 0;
}