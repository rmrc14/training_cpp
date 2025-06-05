// Problem 5: Kth Largest with Multiset

#include <iostream>
#include <set>
#include <string>
#include <sstream>
#include<vector>
using namespace std;


void kthLargestElement() {
    vector<int> input = { 5, 20, 15, 30, 25 };
    int K = 3;
    multiset<int> s(input.begin(), input.end());

    //auto it = s.rbegin();

   // advance(it, K - 1);
    auto it = next(s.rbegin(), K - 1);

    cout << K << "th largest element is: " << *it << endl;
}

int main() {


    kthLargestElement();
    return 0;
}
