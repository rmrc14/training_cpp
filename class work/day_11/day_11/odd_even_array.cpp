/*
store odd elements in first  half of array 
and 2nd half of the array contains the even element 


*/


#include<iostream>
#define CAP 10  //not used
using namespace std;




int main() {
    int a[] = { 11, 13, 12, 15, 8, 6, 4, 3, 7, 1 };
    constexpr int noElems = sizeof(a) / sizeof(a[0]);  // Calculate number of elements in the array

    int oddIndex = 0, evenIndex = noElems - 1;  // Pointers for odd and even numbers

    // Rearrange elements in-place: odd numbers in the first half, even numbers in the second half
    for (int i = 0; i < noElems; i++) {
        if (a[i] % 2 != 0) {
            a[oddIndex++] = a[i];  // Store odd numbers in the first half
        }
        else {
            a[evenIndex--] = a[i];  // Store even numbers in the second half
        }
    }

    // Print the modified array
    cout << "Array with odd numbers in the first half and even numbers in the second half: " << endl;
    for (int i = 0; i < noElems; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

