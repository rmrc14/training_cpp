/*
67.Print All Divisors of a Number
    Problem:
    Given a number n, print all numbers which divide n exactly.

    Logical Tip:
    Loop from 1 to n, check if n % i == 0.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Divisors of " << n << " are: ";
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << n;
    return 0;
}
