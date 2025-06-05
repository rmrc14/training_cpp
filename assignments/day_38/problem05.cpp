#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    set<int> visitors;
    string cmd;
    int user_id;

    while (cin >> cmd) {
        if (cmd == "VISIT") {
            cin >> user_id;
            visitors.insert(user_id);
        }
        else if (cmd == "UNIQUE") {
            cout << visitors.size() << endl;
        }
        else if (cmd == "TOP") {
            for (int id : visitors)
                cout << id << " ";
            cout << endl;
        }
    }
    return 0;
}
