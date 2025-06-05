#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int main() {
    forward_list<string> messages = {
        "Hi", "Hello", "DELETED: Spam", "How are you?", "DELETED: Abuse"
    };

    // Remove messages starting with "DELETED:"
    messages.remove_if([](const string& msg) {  //remove_if iterate through entire list internally
        return msg.rfind("DELETED:", 0) == 0;  // starts with "DELETED:"
        //return msg.find("DELETED:") == 0;

        });

    // Print the cleaned messages
    cout << "[";
    for (auto it = messages.begin(); it != messages.end(); ++it) {
        cout << '"' << *it << '"';
        if (next(it) != messages.end()) cout << ", ";
    }
    cout << "]\n";

    return 0;
}
