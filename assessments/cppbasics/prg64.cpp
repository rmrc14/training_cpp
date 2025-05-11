/*
64. Count Number of Even and Odd Digits in a Number
	Input a number, count how many digits are even and how many are odd.
*/

#include <iostream>
using namespace std;

int main() {
    int num, digit;
    int evenCount = 0, oddCount = 0;

    cout << "Enter a number: ";
    cin >> num;

 
    int temp = abs(num); // handle negative input

    if (temp == 0) {
        evenCount = 1;  // 0 is considered even
    }

    while (temp > 0) {
        digit = temp % 10;

        if (digit % 2 == 0)
            evenCount++;
        else
            oddCount++;

        temp = temp / 10;
    }

    cout << "Even digits: " << evenCount << endl;
    cout << "Odd digits: " << oddCount << endl;

    return 0;
}
