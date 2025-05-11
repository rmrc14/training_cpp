/*
70.		 Find the First Non-Zero Digit of a Number
	Problem:
	Input a number, and print the first non-zero digit from the left.

	Logical Tip:
	Divide by 10 until number becomes <10.
	Carefully handle numbers like 50400
*/
#include <iostream>
#include <cmath> // For absolute value function
using namespace std;

int firstNonZeroDigit(int n);

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int firstDigit = firstNonZeroDigit(num);
    cout << "First non-zero digit: " << firstDigit << endl;

    return 0;
}
int firstNonZeroDigit(int n) 
{

    n = abs(n);


    while (n>10) {
        n /= 10;
    }
    return n ;
}