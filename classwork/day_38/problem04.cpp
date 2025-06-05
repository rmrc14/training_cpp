/*
4: Sliding Window Logging System (Using std::forward_list)
Objective:
	Maintain the latest N log entries in a lightweight memory-efficient system. 
	When new logs exceed the size N, remove the oldest (i.e., tail node).

Requirements:

Use std::forward_list<std::string>.
Support log insertion at the front.
Keep a maximum of N logs in the list.
Display logs in the order most recent to oldest
.
Challenge: 
Since forward_list doesn't support size tracking, implement custom logic to
keep count and remove the last node when limit is exceeded.

Challenge Level: 
Advanced Focus Areas: Pointer manipulation, iterator chaining, singly-linked list handling.


*/


#include <iostream>
#include <forward_list>

#define MAX_LOGS 5

using namespace std;

void addLog(forward_list<string>& logs, const string& message) {
    logs.push_front(message);
    int count = 0;
    auto it = logs.before_begin();
    for (auto next = logs.begin(); next != logs.end(); ++next)
    {
        count++;
        if (count >= MAX_LOGS) {
            logs.erase_after(it);  //Deletes the tail node correctly
            break;
        }
        ++it;
    }
}


int main() {
    forward_list<string> logs;

    addLog(logs, "Error: Disk Full");
    addLog(logs, "Warning: High Memory");
    addLog(logs, "Info: Connection Stable");
    addLog(logs, "Info: Heartbeat OK");
    addLog(logs, "Error: Timeout");
    addLog(logs, "Info: Recovery Complete");

  cout << "Last " << MAX_LOGS << " Logs:\n";
    for (const auto& log : logs)
        cout << log << "\n";

    return 0;
}