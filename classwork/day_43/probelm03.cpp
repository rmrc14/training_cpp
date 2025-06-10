/*
3. Task Priority Scheduler (Priority Queue)
Problem: You need to schedule tasks based on their priority.
Each task has a string description and a priority integer. 
Process tasks starting with the highest priority first.

Input: A list of tasks with descriptions and priority values.

Output: Print tasks in order of execution.

Sample Input:
FixBug 5
ImplementFeature 8
CodeReview 3
Deploy 8

Expected Output:
Execute: ImplementFeature with priority 8
Execute: Deploy with priority 8
Execute: FixBug with priority 5
Execute: CodeReview with priority 3

*/
#include<iostream>
#include<queue>
#include<string>

using namespace std;

struct task 
{
	string prioritytask;
	int priority;
	task(string ptask,int prior):prioritytask(ptask),priority(prior){}
	
	bool operator<(const task& other) const {
		return priority < other.priority;  // Higher priority comes first
	}

};

void execute(priority_queue<task>& ptask)
{
	/*task t1("FixBug", 5), t2("ImplementFeature", 8), t3("CodeReview", 3), t4("Deploy", 8);
	ptask.push(t1);
	ptask.push(t2);
	ptask.push(t3);
	ptask.push(t4);*/

	ptask.emplace("FixBug", 5);
	ptask.emplace("ImplementFeature", 8);
	ptask.emplace("CodeReview", 3);
	ptask.emplace("Deploy", 8);

	while (!ptask.empty())
	{
		task top = ptask.top();
		cout << "execute: " << top.prioritytask << " with priority: " << top.priority << endl;
		ptask.pop();
	}
}

int main()
{
	priority_queue<task> ptask;
	execute(ptask);

	return 0;
}
