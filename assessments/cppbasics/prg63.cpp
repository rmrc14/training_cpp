/*
63.Reverse a Number
    Input a number and print its reverse using loops.
        Example: 123 → 321.
*/

#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;

    
    cin >> num;

    while (num != 0) {
        int digit = num % 10;          
        reversed = reversed * 10 + digit; // Append it to reversed
        num = num / 10;                
    }

    cout << endl << reversed << endl;

    return 0;
}


