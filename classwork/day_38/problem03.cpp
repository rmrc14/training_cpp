/*
Problem 3: Task Reordering System (Using std::list)

Objective: Implement a task manager where tasks can be:

	Added to the end.
	Promoted to the front if marked “Urgent”.
	Removed by name.
Requirements:

    Use std::list<std::string>.

Support the following commands:

	add <task> – adds a task to the end.
	urgent <task> – adds a task to the front.
	remove <task> – removes a task by name.
	show – displays the current task list.

Bonus: Implement a priority system that automatically promotes tasks containing the word "critical".

Challenge Level: Advanced Focus Areas: List traversal, insert, erase, find, and command parsing.


Test Case:
Input Sequence:

add PrepareReport
add SubmitExpense
urgent ClientCall
add FixBug
remove SubmitExpense
show
Expected Output:

ClientCall -> PrepareReport -> FixBug
Bonus Case Input:

add criticalDeployment
show
Expected Bonus Output (if "critical" triggers urgent insertion):

criticalDeployment -> ClientCall -> PrepareReport -> FixBug


*/


#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

// Define the Task structure
typedef struct Tasks {
    string t_priority;
    string t_name;

    Tasks(string name, const string prior = "normal") {
        t_name = name;
        t_priority = prior;
    }
} TASK;

// TaskManager class to handle task operations
class TaskManager {
    list<TASK> tasks;

public:
    TaskManager() {}
    ~TaskManager() {}

    void add(const TASK& t) {
        if (t.t_priority == "Urgent" ||t.t_priority == "urgent")
        {
            tasks.push_front(t);
        }
        else 
        {
            tasks.push_back(t);
        }
    }

    void remove(const string& taskName) {
        auto it = find_if(tasks.begin(), tasks.end(), [&](const TASK& t) {
            return t.t_name == taskName;
            });

        if (it != tasks.end()) {
            tasks.erase(it);
            cout << "[+] Task removed: " << taskName << endl;
        }
        else {
            cout << "[x] Task not found: " << taskName << endl;
        }
    }

    void show() const {
        if (tasks.empty()) {
            cout << "[~] No tasks in the list.\n";
            return;
        }

        cout << "\n=== Task List ===\n";
        for (const auto& t : tasks) {
            cout << "- " << t.t_name << " [" << t.t_priority << "]\n";
        }
    }
};

int main() {
    TaskManager manager;

    TASK t1("skype", "normal");
    TASK t2("google", "Urgent");
    TASK t3("taskmanager", "Urgent");
    TASK t4("critical_update", "normal");
    TASK t5("mail", "normal");

    manager.add(t1);
    manager.add(t2);
    manager.add(t3);
    manager.add(t4); 
    manager.add(t5);

    manager.show();

    manager.remove("taskmanager");
    manager.show();

    return 0;
}
