#include<iostream>
#include<mutex>
#include<condition_variable>

std::condition_variable cv;
std::mutex mtx;
bool ready = false;
int n = 5;

void ping()
{
	for(int i=0;i<n;i++)
	{
		std::unique_lock<std::mutex> lock(mtx);
		cv.wait(lock, [] { return !ready;});
		std::cout << "ping\n";
		ready = true;
		cv.notify_one();
	}
}

void pong()
{
	for(int i=0;i<n;i++)
	{

		std::unique_lock<std::mutex> lock(mtx);
		cv.wait(lock, [] { return ready;});
		std::cout << "pong\n";
		ready = false;
		cv.notify_one();
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