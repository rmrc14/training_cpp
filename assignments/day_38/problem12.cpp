// Problem 3: Inventory Price Checker

#include <iostream>
#include <set>
#include <string>
#include <sstream>

using namespace std;

void inventoryChecker() {
    multiset<int> prices = { 100, 150, 200, 150, 250 };
    int threshold = 150;
    auto it = prices.lower_bound(threshold);
    //distance from first occurence here *it till the end how many occurences
    cout << "Items >= " << threshold << ": " << distance(it, prices.end()) << endl; 

    auto rem = prices.find(150);
    if (rem != prices.end()) 
        prices.erase(rem);

    for (int price : prices) 
        cout << price << " ";
    cout << endl;
}

int main() {

     inventoryChecker();
    
    return 0;
}
