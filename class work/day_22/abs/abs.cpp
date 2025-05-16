#include <iostream>
#include <cstdlib>  // for abs()
using namespace std;
int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    int absoluteValue = abs(number);

    cout << "The absolute value of " << number << " is " << absoluteValue << std::endl;

    return 0;
}
