#include <iostream>
#include <thread>

void backgroundTask(int &n) {
    std::this_thread::sleep_for(std::chrono::seconds(15));
    std::cout << "Background task done." << std::endl;
    n = n + 1;
    std::cout << n << std::endl;
}

int main() {
    int n = 10;
    std::thread t(backgroundTask,std::ref(n));
    t.detach(); // Main won't wait
    std::cout << "Main is not blocked.\n";
    std::this_thread::sleep_for(std::chrono::seconds(15)); // Wait to see output
   // t.join();
    std::cout << n << std::endl;
    return 0;
}