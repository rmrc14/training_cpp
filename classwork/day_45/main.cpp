#include<iostream>
#include<thread>
#include<chrono>
#include<mutex>
using namespace std;

mutex mtx1, mtx2;

void thread1()
{
	lock(mtx1, mtx2);
	lock_guard<mutex> lock1(mtx1, adopt_lock);
	lock_guard<mutex> lock2(mtx2, adopt_lock);
	//std::lock_guard<std::mutex> lock1(mtx1,std::adopt_lock);

	/*lock_guard<mutex> lock1(mtx1);
	this_thread::sleep_for(chrono::milliseconds(100));
	lock_guard<mutex> lock2(mtx2);*/
	cout << "this thread 1 :\n";
}

void thread2()
{
	lock_guard<mutex> lock1(mtx1);
	this_thread::sleep_for(chrono::milliseconds(100));
	lock_guard<mutex> lock2(mtx2);
	cout << "this thread 2: \n";

}


int main()
{
	thread t1(thread1);
	thread t2(thread2);

	t1.join();
	t2.join();

	return 0;



}