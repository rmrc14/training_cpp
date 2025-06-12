/*

5. Print "ABC" Using Three Threads
Problem Statement:
Create three threads to print "A", "B", and "C" respectively in strict sequence. 
The final output should be:
ABCABCABC... repeated 5 times.

Constraints:

Each thread should print only its assigned character.

Use synchronization to ensure ordering: A → B → C → A ...

Objective: Understand how to use condition variables or semaphores to 
coordinate multiple threads cyclically.

*/



#include<iostream>
#include<thread>
#include<mutex>


std::mutex m;
bool flag = true;

void A()
{
	for (int i = 0;i < 5;)
	{
		std::lock_guard<std::mutex> lock(m);

		if (flag)
		{
			std::cout << "A";

			flag = false;
			i++;
		}

	}
}

void B()
{		for (int i = 0;i < 5;)
		{
			std::lock_guard<std::mutex> lock(m);

			if (!flag)
			{
				std::cout << "B";

				flag = true;
				i++;
			}

		}
}


void C()
{
	for (int i = 0;i < 5;)
	{
		std::lock_guard<std::mutex> lock(m);

		if (!flag)
		{
			std::cout << "C";

			flag = true;
			i++;
		}

	}
}

int main()
{
	std::thread t1(A);
	std::thread t2(B);
	std::thread t3(C);

	t1.join();
	t2.join();
	t3.join();

	return 0;
}