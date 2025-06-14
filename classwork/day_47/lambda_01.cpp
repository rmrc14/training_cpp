#include <iostream>
#include <functional>
#include <map>

int main() {
    // Define lambda functions for each operation
    auto add = [](double a, double b) { return a + b; };
    auto sub = [](double a, double b) { return a - b; };
    auto mul = [](double a, double b) { return a * b; };
    auto div = [](double a, double b) -> double {
        if (b == 0) {
            std::cerr << "Error: Division by zero!\n";
            return 0;
        }
        return a / b;
        };

    // Map operation symbol to corresponding lambda
    std::map<char, std::function<double(double, double)>> operations;
    operations['+'] = add;
    operations['-'] = sub;
    operations['*'] = mul;
    operations['/'] = div;

    double num1, num2;
    char op;

    std::cout << "Enter expression (e.g., 5 * 4): ";
    std::cin >> num1 >> op >> num2;

    if (operations.find(op) != operations.end()) {
        double result = operations[op](num1, num2);
        std::cout << "Result: " << result << "\n";
    }
    else {
        std::cerr << "Unsupported operation!\n";
    }

    return 0;
}
