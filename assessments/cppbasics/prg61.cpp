/*
61. heck if Two Numbers are Equal Using Only Bitwise XOR
	Without using ==, check if two numbers are equal.
	Hint: If (a ^ b) == 0, they are equal.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: "<<endl;
    cin >> a >> b;

    // Use XOR to check equality
    if ((a ^ b) == 0) {
        cout << "equal." << endl;
    }
    else {
        cout << "NOT equal." << endl;
    }

    return 0;
}
