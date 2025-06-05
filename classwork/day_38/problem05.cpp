#include <iostream>
#include <forward_list>
#include <string>
#include<vector>

class SlidingWindowLogger {
private:
    std::forward_list<std::string> logs;
    size_t logLimit;
    size_t currentSize;

public:
    SlidingWindowLogger(size_t limit) : logLimit(limit), currentSize(0) {}

    void addLog(const std::string& message) {
        logs.push_front(message);
        currentSize++;

        if (currentSize > logLimit) {
            // Remove last (tail) node
            auto it = logs.before_begin();
            auto next = logs.begin();

            // Traverse until the second last node
            while (std::next(next) != logs.end()) {
                ++it;//the element before the 4th element
                ++next;
            }

            logs.erase_after(it);
            currentSize--;
        }
    }

    void displayLogs() const {
        std::cout << "Log Output (most recent to oldest):\n";
        for (const auto& log : logs) {
            std::cout << log << "\n";
        }
    }
};


int main() {
    SlidingWindowLogger logger(3); // window size = 3

    std::vector<std::string> inputs = {
        "LogA", "LogB", "LogC", "LogD", "LogE"
    };

    for (const auto& log : inputs) {
        logger.addLog(log);
    }

    logger.displayLogs();
    return 0;
}
