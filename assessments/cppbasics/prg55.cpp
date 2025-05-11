/*
55. Write a program in C++ that converts kilometers per hour to miles per hour.
*/

#include <iostream>
using namespace std;

int main() {
    float kmph, mph;

    
    cout << "Enter speed (km/h): ";
    cin >> kmph;

    
    mph = kmph * 0.621;

    
    cout << kmph << " km/h = " << mph << " mph." << endl;

    return 0;
}
