/*
problem 4 
            EQUILIBRIUM

You are given an array A of N positive or negative integers.
Your task is to find the first equilibrium position in the array.

An equilibrium position is an index i such that the sum of elements before index i 
is equal to the sum of elements after index i.

Return the first equilibrium index (0-based indexing). If no such index exists, return -1.

*/




#include<iostream>
//#define MAX 50   here we used dynamic allocation using new and delete[] to free dynamic allocation heap memory

int equilibrium(int [], int );

using namespace std;

int main() 
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int* arr = new int[size];  // heap allocation

    for (int i = 0; i < size; i++) // ip
        cin >> arr[i];


    equilibrium(arr, size);  // func call



    return 0;
}


int equilibrium(int arr[],int size)
{


    int totalSum = 0;
    for (int i = 0; i < size; i++) {   // total sum of array
        totalSum += arr[i];
    }

    int leftsum = 0;

    for (int i = 0; i < size; i++) {
        totalSum -= arr[i];            // minus the element to find equilibrium till n times or if exits

        if (leftsum == totalSum) {
            cout << "The equilibrium position is: " << i << endl;
            delete[] arr;  // delete allocation before return 
            return 0;
        }

        leftsum += arr[i]; //after condition checked need to add the element back to loop
    }

    cout << "-1" << endl;  // op -1 if not meeting the condition

    delete[] arr;
    return 0;
}