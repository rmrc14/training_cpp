#include <iostream>
#include <chrono>
#include<Windows.h>
int main() {
    auto start = std::chrono::high_resolution_clock::now();

    // Simulated work
    for (int i = 0; i < 1000000; ++i)
    {
       

    }
    Sleep(1000);


    auto end = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Execution Time: " << duration.count() << " microseconds\n";
}