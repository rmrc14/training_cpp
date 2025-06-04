#include <iostream>
#include <list>
#include <string>
#include <algorithm>
#include <sstream>

class TaskManager {
    std::list<std::string> tasks;

public:
    void addTask(const std::string& task) {
        if (task.find("critical") != std::string::npos) 
        {
            tasks.push_front(task); // Bonus: promote "critical" tasks
        }
        else 
        {
            tasks.push_back(task);
        }
    }

    void addUrgentTask(const std::string& task) {
        tasks.push_front(task);
    }

    void removeTask(const std::string& task) {
        auto it = std::find(tasks.begin(), tasks.end(), task);
        if (it != tasks.end()) {
            tasks.erase(it);
        }
    }

    void showTasks() const {
        for (auto it = tasks.begin(); it != tasks.end(); ++it) {
            std::cout << *it;
            if (std::next(it) != tasks.end()) {
                std::cout << " -> ";
            }
        }
        std::cout << std::endl;
    }

    void processCommand(const std::string& input) {
        std::istringstream iss(input);
        std::string cmd, arg;
        iss >> cmd;

        std::getline(iss, arg);
        arg.erase(0, arg.find_first_not_of(" \t")); // trim leading space

        if (cmd == "add") {
            addTask(arg);
        }
        else if (cmd == "urgent") {
            addUrgentTask(arg);
        }
        else if (cmd == "remove") {
            removeTask(arg);
        }
        else if (cmd == "show") {
            showTasks();
        }
        else {
            std::cout << "Unknown command: " << cmd << std::endl;
        }
    }
};

int main() {
    TaskManager tm;

    // Sample input sequence
    tm.processCommand("add PrepareReport");
    tm.processCommand("add SubmitExpense");
    tm.processCommand("urgent ClientCall");
    tm.processCommand("add FixBug");
    tm.processCommand("remove SubmitExpense");
    tm.processCommand("show");

    // Bonus test case
    tm.processCommand("add criticalDeployment");
    tm.processCommand("show");

    return 0;
}
