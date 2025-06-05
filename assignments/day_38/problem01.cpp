/*
std::list<string> – Text Editor Buffer (Doubly Linked List)
📌 Problem: Text Line Navigator
Design a line-based text editor using std::list<string>.

Users can insert a new line at the cursor.
They can navigate UP or DOWN.
Print the full text at the end.
🧾 Input (Operations):
INSERT Hello
INSERT World
UP
INSERT Beautiful
DOWN
INSERT People
PRINT
✅ Expected Output:
Hello
Beautiful
World
People
💡 Hint:
Use an iterator as a cursor to insert or move.


*/


#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    list<string> buffer;
    auto cursor = buffer.begin();  // cursor points to insertion point

    string command;
    while (getline(cin, command)) {
        if (command == "PRINT") {
            for (const auto& line : buffer) {
                cout << line << "\n";
            }
            break;
        }
        else if (command == "UP") {
            if (cursor != buffer.begin())
                --cursor;
        }
        else if (command == "DOWN") {
            if (cursor != buffer.end())
                ++cursor;
        }
        else if (command.rfind("INSERT ", 0) == 0) {
            string text = command.substr(7);  // get text after "INSERT "
            cursor = buffer.insert(cursor, text);
            ++cursor;  // move cursor after inserted line
        }
    }

    return 0;
}
/*
INSERT Hello
INSERT World
UP
INSERT Beautiful
DOWN
INSERT People
PRINT
*/