// check pattern numbers


#include <iostream>
using namespace std;

// Function to calculate binomial coefficient C(n, k)
int binomialCoeff(int n, int k) {
    int res = 1;

    // Use property C(n, k) = C(n, k - 1) * (n - k + 1) / k
    if (k > n - k)
        k = n - k;

    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // Print spaces 
        for (int space = 0; space < n - i - 1; space++)
            cout << "  ";

        for (int j = 0; j <= i; j++)
            cout << binomialCoeff(i, j) << "   ";

        cout << endl;
    }

    return 0;
}
