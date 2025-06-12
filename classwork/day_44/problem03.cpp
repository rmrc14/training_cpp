/*


3. Thread-safe Counter with Mutex
Problem: Create multiple threads that increment a shared counter 1000 times each.
Use a mutex to protect the counter from race conditions.

Objective: Demonstrate data race and how to prevent it using std::mutex.

*/

#include<iostream>
#include<thread>
#include<mutex>

int amt = 0;
std::mutex m;
void counting(int n, bool flag)
{
	m.lock();
	
		if (flag)
			std::cout << "thread1: " << std::endl;
		else
			std::cout << "thread2: " << std::endl;
		
		for (;n < 1000;n++)
		{
			std::cout << n << std::endl;
		}
		m.unlock();
	

}


int main()
{
	
	std::thread t1(counting, 0, true);
	std::thread t2(counting, 0, false);

	t1.join();
	t2.join();

	return 0;

}