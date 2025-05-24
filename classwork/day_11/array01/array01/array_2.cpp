/*
Q.2
Given an array A of N positive numbers. The task is to find the position
where equilibrium first occurs in the array. Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of   elements after it.

Input Format:
The first line contains an integer, denoting the size of the array.
The second line contains integers denoting the elements
of the array.
Constraints
1<= n<=100
1<=arr<= 1000, where arr is the ith element of the array.

Output Format:
The output line contains integer denoting an equilibrium
index (if any) or -1 (if no equilibrium indexes exist).

TESTCASE 1:
Input:
7
[-7, 1, 5, 2, -4, 3, 0]

o/p
3

I/p
5
[0 0 0 0 -1]

o/p
4

*/

#include<iostream>
//#define MAX 50  used dynamic allocation using-- new and delete[] to free dynamic allocation
using namespace std;

int main() {
    int size, sum;
    cout << "Enter size of array: ";
    cin >> size;

    int* arr = new int[size];  // should be star /pointer  as-- base address

    for (int i = 0; i < size; i++) 
       cin >> arr[i];
    

    int totalSum = 0;
    for (int i = 0; i < size; i++) {   // total sum of array
        totalSum += arr[i];
    }

    int leftsum = 0;

    for (int i = 0; i < size; i++) {
        totalSum -= arr[i];            // minus the element to find equilibrium till n times or if exits

        if (leftsum == totalSum) {
            cout << "The equilibrium position is: " << i << endl;
            delete[] arr;
            return 0;
        }

        leftsum += arr[i]; //after condition checked need to add the element back to loop
    }

    cout << "No equilibrium position" << endl;

    delete[] arr;
    return 0;
}