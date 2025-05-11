/*

59.  Calculate Compound Interest
	Given principal P, rate R, and time T, find Compound Interest.
	Formula: A = P * (1 + R/100)^T, CI = A - P
	Use only basic operators.

*/

#include <iostream>
using namespace std;

int main() {
    double principal, rate, time;
    double amount = 1.0;

    cout << "Enter Principal (P): ";
    cin >> principal;

    cout << "Enter Rate of interest (R): ";
    cin >> rate;

    cout << "Enter Time in years (T): ";
    cin >> time;


    // Convert rate to multiplier: (1 + R/100)
    double multiplier = 1 + rate / 100;

    // Compute (1 + R/100)^T using loop 
    for (int i = 0; i < time; i++) {
        amount *= multiplier;
    }

    
    amount *= principal;

    
    double compoundInterest = amount - principal;

    cout << "Compound Interest = " << compoundInterest << endl;
    cout << "Total Amount = " << amount << endl;

    return 0;
}
