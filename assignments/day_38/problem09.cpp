#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    set<int> booked;
    string cmd;
    int time;

    while (cin >> cmd >> time) {
        if (cmd == "BOOK") {
            if (booked.count(time))
                cout << "Already Booked" << endl;
            else {
                booked.insert(time);
                cout << "Booked: " << time << endl;
            }
        }
        else if (cmd == "CHECK") {
            if (booked.count(time))
                cout << "Already Booked" << endl;
            else
                cout << "Free" << endl;
        }
    }

    return 0;
}
