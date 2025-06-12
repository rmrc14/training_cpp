/*
2. Print Odd and Even Numbers Using Same Function
Problem: Write a program using two threads running the same function to print odd and even
numbers from 1 to N. Use a flag to distinguish between threads.

Objective: Learn how to pass arguments to threads and reuse the same function logic with
different behavior.

*/


#include<iostream>
#include<thread>
#include<mutex>

int amt = 0;
std::mutex m;
void oddEven(int n ,bool flag)
{
	for (;amt <= n;amt++)
	{
		if (flag)
			std::cout << "thread1: " << std::endl;
		else
			std::cout << "thread2: " << std::endl;
		if (amt % 2 == 0)
			std::cout << "even: " << amt << std::endl;
		else
			std::cout << "odd: " << amt << std::endl;
		
	}

}


int main()
{
	int n;
	std::cin >> n;
	std::thread t1(oddEven, n,true);
	std::thread t2(oddEven, n,false);

	t1.join();
	t2.join();

	return 0;

}