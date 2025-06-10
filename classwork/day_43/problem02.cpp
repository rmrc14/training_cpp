/*
Print Job Scheduling (Queue)
Problem: You have a queue of print jobs. Each job has a user name and a number of pages.
Print jobs are processed in order, but if a job exceeds 10 pages, it should be split into 
chunks of 10 pages and processed as multiple jobs.

Input: A list of print jobs in the format: <username> <pages>

Output: Print the order in which jobs are processed, showing the user and pages printed per chunk.

i/p:
Alice 15
Bob 8
Charlie 23
o/p:
Processing: Alice 10 pages
Processing: Alice 5 pages
Processing: Bob 8 pages
Processing: Charlie 10 pages
Processing: Charlie 10 pages
Processing: Charlie 3 pages
*/



#include <iostream>
#include <queue>
#include <string>
#include <sstream>

using namespace std;
struct Printjob
{
    int num;
    string name;
};

int main() {
    queue<Printjob> print;
  
    string line;

    while (getline(cin, line))
    {
        istringstream iss(line);
        Printjob job;
        iss >> job.name >> job.num; 
        print.push(job);

        while (job.num)
        {
            if(job.num>10)
            {
                cout <<"Processing: " << job.name << " " << 10 << endl;
                job.num -= 10;
            }
            else
            { 
                cout << "Processing: " << job.name << " " << job.num << endl;
                job.num = 0;
            }
        }
        
    }
    return 0;
}
