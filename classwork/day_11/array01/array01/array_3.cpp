/*
Q3. Given an array of positive integers.
Your task is to find the leaders in the array. An element is leader if it is greater than all the elements to its right side.
And the rightmost element is always a leader.

Input Format:
The first line contains an integer, denoting the size of the array.
The second line contains integers denoting the elements of the array.

Constraints
 1<= n<=100-1000<=arr[i]<= 1000, where arr is the ith  element of the array.
 Output Format:
 The output line prints all the leaders in the array.

TESTCASE 1:
 Input:
 6
 6 7 4 3 5 2
 Output:
 2 5 7

TESTCASE 2:
 Input:
 5
 2 6 3 8 4
 Output:
 4 8
*/


#include<iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int* arr = new int[size]; //initialised dynamically

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) 
        cin >> arr[i];
    

    int maxFromRight = arr[size - 1];
    cout << maxFromRight << " "; //as the rightmost element is always the leader

    for (int i = size - 2; i >= 0; i--) // size-2 dont require the leader
    { 
        if (arr[i] > maxFromRight)        // first compares to the leader then continues the loop
        {
            cout << arr[i] << " ";
            maxFromRight = arr[i];
        }
    }

    delete[] arr;
    return 0;
}