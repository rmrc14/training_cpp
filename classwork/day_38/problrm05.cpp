/*


*/

#include <iostream>
#include <deque>
#include <sstream>
#include <string>
#include <vector>

class BrowserSimulator {
private:
    std::deque<std::string> backStack;
    std::deque<std::string> forwardStack;
    std::string currentPage;

public:
    void visit(const std::string& url) {
        if (!currentPage.empty()) {
            backStack.push_back(currentPage);
        }
        currentPage = url;
        forwardStack.clear();
        std::cout << "Visited: " << currentPage << "\n";
    }

    void back() {
        if (backStack.empty()) {
            std::cout << "No back history!\n";
            return;
        }
        forwardStack.push_front(currentPage);
        currentPage = backStack.back();
        backStack.pop_back();
        std::cout << "Back to: " << currentPage << "\n";
    }

    void forward() {
        if (forwardStack.empty()) {
            std::cout << "No forward history!\n";
            return;
        }
        backStack.push_back(currentPage);
        currentPage = forwardStack.front();
        forwardStack.pop_front();
        std::cout << "Forward to: " << currentPage << "\n";
    }

    void current() const {
        if (currentPage.empty()) {
            std::cout << "No page currently visited.\n";
        }
        else {
            std::cout << "Current page: " << currentPage << "\n";
        }
    }

    void history() const {
        std::cout << "Browsing History:\n";
        std::cout << "Back Stack: ";
        for (const auto& url : backStack) {
            std::cout << url << " ";
        }
        std::cout << "\nCurrent: " << currentPage << "\n";
        std::cout << "Forward Stack: ";
        for (const auto& url : forwardStack) {
            std::cout << url << " ";
        }
        std::cout << "\n";
    }

    void processCommand(const std::string& commandLine) {
        std::istringstream iss(commandLine);
        std::string command;
        iss >> command;
        if (command == "visit") {
            std::string url;
            iss >> url;
            visit(url);
        }
        else if (command == "back") {
            back();
        }
        else if (command == "forward") {
            forward();
        }
        else if (command == "current") {
            current();
        }
        else if (command == "history") {
            history();
        }
        else {
            std::cout << "Unknown command: " << commandLine << "\n";
        }
    }
};
int main() {
    BrowserSimulator browser;

    std::vector<std::string> commands = {
        "visit google.com",
        "visit github.com",
        "visit stackoverflow.com",
        "back",
        "back",
        "forward",
        "current",
        "visit openai.com",
        "forward",
        "back",
        "current",
        "history"
    };

    for (const auto& cmd : commands) {
        browser.processCommand(cmd);
    }

    return 0;
}
