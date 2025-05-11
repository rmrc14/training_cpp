/*
62. Find Remainder Without Using % Operator
    Given two integers a and b, find a%b without using %.
    Hint: Use a - (a/b)*b..
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter dividend (a): ";
    cin >> a;
    cout << "Enter divisor (b): ";
    cin >> b;

    if (b == 0) {
        cout << "Division by zero is not allowed." << endl;
        return 1;
    }

    int remainder = a - (a / b) * b;

    cout << "Remainder (a % b) = " << remainder << endl;
    return 0;
}

