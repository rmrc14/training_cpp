/*
53. Write a program in C++ to find the area and circumference of a circle.
*/


#include <iostream>
#define PI 3.14

using namespace std;

int main() {
   
    float r;
    cin >> r;

    cout << "circumference of circle: " << 2 * PI * r;
    cout << "\narea of the circle: \t" << r * PI * r;
    return 0;
}
