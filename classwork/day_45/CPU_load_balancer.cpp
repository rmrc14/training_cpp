

// Problem Statement : CPU Load Balancer Simulation
#include<thread>

#include "parse.h"

#include <queue>
#include <mutex>
#include <condition_variable>

class TaskList
{
	std::vector<task> task_list;
	std::mutex mtx;
public:

	void setTask(std::vector<task> t) { task_list = t; }

	void executeTask(int cpu)
	{
		while (!task_list.empty())
		{
			std::unique_lock<std::mutex> lock(mtx);
			//for concurrent threads
			if (task_list.empty())break;

			//class
			task t2;
			t2 = *task_list.begin();
			task_list.erase(task_list.begin());

			std::cout << "CPU-" << cpu << " picked Task " << t2.getTname() 
				<< " (Load: " << t2.getTime() << ")" << std::endl;
			lock.unlock();
			
			t2.execute();
			
			lock.lock();

			std::cout << "CPU-" << cpu << " finished Task " << t2.getTname() << std::endl;

			lock.unlock();

		}
	}
};


int main()
{
	int cpuNumber;
	
	Parse p("input.txt");
	

	//p.print();
	cpuNumber = p.getcpunum();

	std::vector<task> t1= p.getTask();
	
	TaskList t;
	t.setTask(t1);

	std::vector<std::thread> cpuThreads;


	for (int i = 1; i <= cpuNumber; ++i)
	{
		cpuThreads.emplace_back(&TaskList::executeTask, &t, i);  
		// Pass method pointer and object
	}
	/*
	using namespace std;
	vector < thread * > threadlist;
	thread * t = new thread(&TaskList::executeTask, &t );
	threadlist.push_back(t);
	*/



	for (auto& th : cpuThreads)
		th.join();

	std::cout << "All tasks completed.\n";

	return 0;
}