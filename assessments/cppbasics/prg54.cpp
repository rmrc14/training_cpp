/*
54.	Write a program in C++ to convert temperature in Fahrenheit to Celsius
*/

#include <iostream>
using namespace std;

int main() {
    float fahrenheit, celsius;

   
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    
    cout << fahrenheit << " Fahrenheit = " << celsius << " Celsius." << endl;

    return 0;
}
