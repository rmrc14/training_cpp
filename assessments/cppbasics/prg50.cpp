/*
50. Write a Program for Decimal to Hexadecimal Conversion
*/

#include <iostream>
using namespace std;

void decimalToHexadecimal(int n) {
    char hexDigits[] = "0123456789ABCDEF";
    string hex = "";

    if (n == 0) {
        cout << "Hexadecimal: 0" << endl;
        return;
    }

    while (n > 0) {
        int remainder = n % 16;
        hex = hexDigits[remainder] + hex;  // Prepend the character
        n /= 16;
    }

    cout << "Hexadecimal: " << hex << endl;
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    decimalToHexadecimal(decimal);

    return 0;
}
