#include <iostream>
using namespace std;

void moveZerosToEnd(int arr[], int n) {
    int index = 0;  

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    //  Fill the rest with zeros
    while (index < n) {
        arr[index++] = 0;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    moveZerosToEnd(arr, n);

    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
