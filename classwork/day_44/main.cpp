#include <iostream>
#include <thread>
using namespace std;
void hello() {
    std::cout << "Hello from thread!\n";
}

void display(int x) { cout << "x: " << x << endl; }
void modify(int& x) { x *= 2; }

int main() {
    int val = 10;

    std::thread t(hello);
    t.join();
    std::cout << "hello\n";
    //t.join();

    thread t1(display, 101);
    t1.join();

    thread t3(modify, std::ref(val)); // ref passes at reference
    cout << "val:" << val << endl;

    t3.join();

    cout << "val:" << val << endl;

    return 0;
}