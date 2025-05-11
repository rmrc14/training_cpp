/*
47. Write a Program for Hexadecimal to Decimal Conversion

*/

#include <iostream>
#include <cstring>

#define MAX 100

using namespace std;


int hexToDecimal(char hex[]); 


int main() {
    char hex[MAX];
    //cout << "Enter a hexadecimal number: ";
    cin >> hex;

    int result = hexToDecimal(hex);
    if (result != -1)
        cout << "Decimal equivalent: " << result << endl;

    return 0;
}

int hexToDecimal(char hex[]) {
    int length = strlen(hex);
    int base = 1;  // 16^0
    int decimal = 0;

    
    for (int i = length - 1; i >= 0; i--)
    {
        char ch = hex[i];

        // Convert character to value (0-9 or A-F)
        if (ch >= '0' && ch <= '9') {
            decimal += (ch - '0') * base;
        }
        else if (ch >= 'A' && ch <= 'F') {
            decimal += (ch - 'A' + 10) * base;
        }
        else if (ch >= 'a' && ch <= 'f') {
            decimal += (ch - 'a' + 10) * base;
        }
        else {
            cout << "Invalid Hexadecimal Digit: " << ch << endl;
            return -1;
        }

        base *= 16; //16^2  , 16^3
    }

    return decimal;
}