#include <iostream>
#include <set>
#include <sstream>
#include <string>

using namespace std;

int main() {
    set<string> banned = { "bad", "evil", "vulgar" };
    string text = "this is a bad example with evil words";

    string word;
    stringstream ss(text);
    while (ss >> word) {
        if (banned.find(word) == banned.end())  // to check
            cout << word << " ";
    }
    cout << endl;
    return 0;
}
