/*
Emergency Room Queue (Priority Queue with Custom Comparator)
Problem: 

Patients arrive at the emergency room. 
Each patient has a name, age, and severity score. 
Patients with higher severity are treated first.
If severity is the same, older patients have higher priority.

Input: List of patients in format: <name> <age> <severity>

Output: Print patients in order of treatment.

Sample Input:
John 65 5
Alice 70 5
Bob 30 7
Eve 40 5

Expected Output:
Treating: Bob, Age: 30, Severity: 7
Treating: Alice, Age: 70, Severity: 5
Treating: John, Age: 65, Severity: 5
Treating: Eve, Age: 40, Severity: 5

*/

#include<iostream>
#include<queue>
#include<string>

using namespace std;

struct EmergencyRoom
{
	string name;
	int age;
	int severity;
	EmergencyRoom(string name,int age, int prior) :name(name), age(age), severity(prior) {}

	bool operator<(const EmergencyRoom& other) const {
		return severity < other.severity;  // Higher priority comes first
	}

};

void execute(priority_queue<EmergencyRoom>& sev)
{
	sev.emplace("John" ,65, 5);
	sev.emplace("Alice" ,70 ,5);
	sev.emplace("Bob" ,30, 7);
	sev.emplace("Eve", 40, 5);
	
	while (!sev.empty())
	{
		EmergencyRoom top = sev.top();
		cout << "Treating: " << top.name << " , age : " << top.age<<", severity: "<<top.severity << endl;
		sev.pop();
	}
}

int main()
{
	priority_queue<EmergencyRoom> ptask;
	execute(ptask);

	return 0;
}