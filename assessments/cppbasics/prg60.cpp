/*
60. Check if a Number is Divisible by Both 3 and 5
		Take an integer and check if divisible by 3 and 5 using logical operators (&&)
*/

#include <iostream>
using namespace std;

int main() {
    int num;

    cin >> num;

    
    if (num % 3 == 0 && num % 5 == 0) {
        cout << num << " divisible by both 3 and 5." << endl;
    }
    else {
        cout << num << " NOT divisible by both" << endl;
    }

    return 0;
}
