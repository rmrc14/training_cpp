/*
65. Print Multiplication Table of a Number
*/

#include <iostream>
using namespace std;

int main() {
    int num;

    cin >> num;

    cout << "Multiplication Table of " << num << ":\n";
    for (int i = 1; i <= 10; ++i) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
