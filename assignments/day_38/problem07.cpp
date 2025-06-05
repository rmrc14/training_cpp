#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    set<int> prices;
    string cmd;
    int val;

    while (cin >> cmd) {
        if (cmd == "ADD") {
            cin >> val;
            prices.insert(val);
        }
        else if (cmd == "REMOVE") {
            cin >> val;
            if (prices.erase(val))
                cout << val << " removed" << endl;
            else
                cout << val << " not found" << endl;
        }
        else if (cmd == "MINMAX") {
            if (!prices.empty())
                cout << *prices.begin() << " " << *prices.rbegin() << endl;
        }
    }
    return 0;
}
