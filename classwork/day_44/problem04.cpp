/*

4. Print Characters Alternately (Ping Pong)
Problem: Create two threads. One prints "Ping" and the other prints "Pong" alternately 10 times.
Ensure the output is in the correct alternating sequence.

Objective: Understand thread synchronization using condition variables or atomic flags.

*/

#include<iostream>
#include<thread>
#include<mutex>


std::mutex m;
bool flag = true;

void ping()
{
		for(int i=0;i<5;)
		{
			std::lock_guard<std::mutex> lock(m);

			if (flag)
			{
				std::cout << "ping:\n";

				flag = false;
				i++;
			}

		}
}

void pong()
{

	

	for (int i = 0;i < 5;)
	{
		std::lock_guard<std::mutex> lock(m);

		if (!flag)
		{
			std::cout << "pong: \n";

			flag = true;
			i++;
		}

	}
}
int main()
{
	std::thread t1(ping);
	std::thread t2(pong);

	t1.join();
	t2.join();

	return 0;
}
