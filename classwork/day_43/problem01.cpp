/*
1. Browser History Navigation (Stack)

Problem:  Simulate a browser’s back and forward buttons using two stacks.

When the user visits a new URL, push it onto the “back” stack and clear the “forward” stack.
When the user clicks "Back," pop the current page from the “back” stack and push it to the
“forward” stack.
When the user clicks "Forward," pop the top page from the “forward” stack back to the “back” stack.

Input: A sequence of commands:

"visit <URL>"
"back"
"forward"
Output: Print the current URL after each command.

i/p:
visit google.com
visit stackoverflow.com
back
visit github.com
back
forward
forward

o/p:
Current page: google.com
Current page: stackoverflow.com
Current page: google.com
Current page: github.com
Current page: google.com
Current page: github.com
Current page: github.com
*/

#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

int main() {
    stack<string> back, forward;
    string currentPage;                   // will stay empty until first visit
    string line;

    while (getline(cin, line)) 
    {
        istringstream iss(line);
        string command, url;
        iss >> command >> url;            // url will be empty for back/forward

        if (command == "visit") 
        {
            if (!currentPage.empty())
                back.push(currentPage);   // save current page in back history

            currentPage = url;            // move to new page
            while (!forward.empty())      // clear forward history
                forward.pop();

        }
        else if (command == "back") 
        {
            if (!back.empty()) 
            {
                forward.push(currentPage);   // move current to forward stack
                currentPage = back.top();    // show previous page
                back.pop();
            }

        }
        else if (command == "forward") 
        {
            if (!forward.empty()) 
            {
                back.push(currentPage);      // move current to back stack
                currentPage = forward.top(); // show next page
                forward.pop();
            }
        }

        cout << ">Current page: " << currentPage << '\n';
    }
    return 0;
}
