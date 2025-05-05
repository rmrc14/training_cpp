/*
Problem Statement 2
You are given a sorted array A of size N containing integers. Every element in the array appears exactly twice, except for one element that appears only once. Your task is to find and print that unique element.


*/

#include <iostream>
using namespace std;
#define MAX 100
int findUnique(int arr[], int n);
    

int main() {
    int n;
    cin >> n;

    int arr[MAX]; // max size as per constraint
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int unique = findUnique(arr, n);
    cout << unique << endl;

    return 0;
}


int findUnique(int arr[], int n) {
    for (int i = 0; i < n - 1; i += 2) {
        if (arr[i] != arr[i + 1]) {
            return arr[i];
        }
    }
    // If not found in loop, it's the last element
    return arr[n - 1];
}