#include<iostream>
#include<mutex>
#include<string>
#include<thread>

using namespace std;

class Counter
{
	int x;
	mutex mtx;
public:
	Counter():x(0){}

	void increment(const string tName)
	{
		for(int i=0;i<5;i++)
		{
			lock_guard<mutex> lock(mtx);  // RAII-style lock
			//mtx.lock();
			x += 2;
			cout << '\n'<<tName<<" increase x by " << x << endl;
		//	mtx.unlock();
			this_thread::sleep_for(chrono::milliseconds(200));
		}
	}
	int getX() { return x; }
};


int main()
{
	Counter c;
	thread t1(&Counter::increment, &c, "thread1");
	thread t2(&Counter::increment, &c,"thread2");
	t1.join();
	t2.join();
	//c.increment();
	cout << c.getX() << endl;
	return 0;
}