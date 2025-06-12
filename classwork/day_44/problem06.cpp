/*

6. Odd-Even Alternating Print Using Threads
Problem Statement:
Create two threads, one to print odd numbers and one to print even numbers from 1 to 20 in order:
1 2 3 4 ... 20

Constraints:

The odd thread prints 1, 3, 5...

The even thread prints 2, 4, 6...

The output must be strictly in sequence.


*/


#include<iostream>
#include<thread>
#include<mutex>


int n = 20;int i = 0;
std::mutex m;
bool flag = true;

void odd()
{
	for (;i < n;)
	{
		std::lock_guard<std::mutex> lock(m);

		if (i%2==0&&flag)
		{
			std::cout <<i<<" - odd" << "\n";

			flag = false;
			i++;
		}

	}
}

void even()
{



	for (;i < n;)
	{
		std::lock_guard<std::mutex> lock(m);

		if (i % 2 != 0 && flag==false)
		{
			std::cout << i<<" - even" << "\n";

			flag = true;
			i++;
		}

	}
}
int main()
{
	std::thread t1(odd);
	std::thread t2(even);

	t1.join();
	t2.join();

	return 0;
}
