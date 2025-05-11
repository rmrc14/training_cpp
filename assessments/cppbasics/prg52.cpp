/*
52. Write a program in C++ to check whether the primitive values crossing the limits or not.
*/


#include <iostream>


using namespace std;

int main() {
    // Integer limits
    int int_max = INT_MAX;
    int int_min = INT_MIN;

    cout << "INT_MAX: " << int_max << endl;
    cout << "INT_MAX + 1 (Overflow): " << int_max + 1 << endl;
    cout << endl;
    cout << "INT_MIN: " << int_min << endl;
    cout << "INT_MIN - 1 (Underflow): " << int_min - 1 << endl;

    //// Short limits
    //short short_max = SHRT_MAX;
    //short short_min = SHRT_MIN;

    //cout << "\nSHRT_MAX: " << short_max << endl;
    //cout << "SHRT_MAX + 1 (Overflow): " << short(short_max + 1) << endl;

    //cout << "SHRT_MIN: " << short_min << endl;
    //cout << "SHRT_MIN - 1 (Underflow): " << short(short_min - 1) << endl;

    //// Char limits
    //char char_max = CHAR_MAX;
    //char char_min = CHAR_MIN;

    /*cout << "\nCHAR_MAX: " << (int)char_max << endl;
    cout << "CHAR_MAX + 1 (Overflow): " << (int)(char_max + 1) << endl;

    cout << "CHAR_MIN: " << (int)char_min << endl;
    cout << "CHAR_MIN - 1 (Underflow): " << (int)(char_min - 1) << endl;*/

    return 0;
}
