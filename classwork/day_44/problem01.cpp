/*

1. Print Numbers Using Two Threads

Problem: Create two threads. One thread prints numbers from 1 to 10, 
and the other thread prints numbers from 11 to 20. Use std::thread to demonstrate
concurrent execution.

Objective: Understand basic thread creation and joining.
*/

#include<iostream>
#include<thread>
#include<mutex>

int amt = 1;
std::mutex m;
void sum(int n)
{
	for(;amt<=n;)
	{
		//m.lock();
		std::cout << amt++ << " ";
		//m.unlock();
	}

}


int main()
{
	std::thread t1(sum,10);
	std::thread t2(sum,20);

	t1.join();
	t2.join();

	return 0;

}