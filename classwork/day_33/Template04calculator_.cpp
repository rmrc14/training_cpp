#include <iostream>
using namespace std;

template <class T1, class T2>
class Calculator {
public:
    T1 Add(T1 v1, T2 v2) {
        return v1 + v2;
    }

    T1 Subtract(T1 v1, T2 v2) {
        return v1 - v2;
    }

    T1 Division(T1 v1, T2 v2) {
        if (v2 != 0) {
            return v1 / v2;
        }
        else {
            //cout << "Division by zero not allowed." << endl;
            return 0;
        }
    }

    T1 Multiply(T1 v1, T2 v2) {
        return v1 * v2;
    }
};

int main() {
    Calculator<int, int> intCal;
    Calculator<float, float>floatCal;
    Calculator<string, string>stringCal;//("hello", "world");

    string s1 = "hello", s2 = "world";
    cout << stringCal.Add(s1, s2) << endl;;

    int a = 12, b = 4;
    float c = 3.98, d = 4.34;
    cout << "Add: " << intCal.Add(a, b) << endl;
    cout << "Subtract: " << intCal.Subtract(a, b) << endl;
    cout << "Multiply: " << intCal.Multiply(a, b) << endl;
    cout << "Division: " << intCal.Division(a, b) << endl;

    cout << "Add: " << floatCal.Add(c,d) << endl;
    cout << "Subtract: " << floatCal.Subtract(c, d) << endl;
    cout << "Multiply: " << floatCal.Multiply(c, d) << endl;
    cout << "Division: " << floatCal.Division(c, d) << endl;
    
    
    //division by zero
    cout << "Division: " << floatCal.Division(c, 0) << endl;
    cout << "Division: " << floatCal.Division(0, d) << endl;
    return 0;
}
