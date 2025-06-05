#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    const int MAX_HISTORY = 4;
    deque<string> history;

    string line;
    while (getline(cin, line))   //gets input 
    {
        if (line == "HISTORY") {
            for (const string& cmd : history) {
                cout << cmd << endl;
            }
        }
        else if (line.rfind("RUN ", 0) == 0) {
            string command = line.substr(4);  // remove "RUN "
            history.push_back(command);

            if (history.size() > MAX_HISTORY) {
                history.pop_front();  // remove the oldest
            }
        }
    }

    return 0;
}
