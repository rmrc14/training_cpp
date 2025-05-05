/*
Problem Statement 6
You are given an array arr[] of size N containing positive integers.
Your task is to reverse every sub-array of size K.

If the number of elements left at the end is less than K, reverse all of them as is.

*/

#include <iostream>
#define MAX 100
using namespace std;

void reverseGroups(int arr[], int N, int K);

int main() {
    int N, K;
    cin >> N;

    int arr[MAX];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cin >> K;

    reverseGroups(arr, N, K);

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}




void reverseGroups(int arr[], int N, int K) {
    for (int i = 0; i < N; i += K) {
        int left = i;
        int right = i + K - 1;

        // If the right index goes beyond array size, brings it back
        if (right >= N) {
            right = N - 1;
        }

        // Manual swap using a temporary variable
        while (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left++;
            right--;
        }
    }
}

/*
void reverseGroups(int arr[], int N, int K) {
    for (int i = 0; i < N; i += K) {
        int left = i;
        int right = min(i + K - 1, N - 1);

        // Reverse elements between left and right
        while (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}*/
