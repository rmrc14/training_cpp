#include<iostream>
#include<chrono>
#include<thread>
#include<mutex>

using namespace std;

int amt = 0;

std::mutex mtx;
int counter = 0;

void increment() {
    mtx.lock();
    ++counter;
    mtx.unlock();
}
int main()
{

	std::this_thread::sleep_for(std::chrono::seconds(10));


	return 0;
}