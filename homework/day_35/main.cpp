/*
Project: JobChain – CPU Job Scheduling Simulator with Logging System

🚀 Assessment Problem Statement
	Build a menu-driven CPU Job Scheduling Simulator that loads a list of jobs 
	from a file and executes them according to selected scheduling strategies 
	such as FIFO (by Job ID) or Priority-based scheduling.

	You must implement a basic logging mechanism that supports log levels:



*/
#include<chrono>
#include<algorithm>
#include<thread>
#include<string>
#include<vector>
#include"job.h"
#include"Logger.h"
#include <iostream>
#include <fstream>
#include <sstream>

bool loadJobsFromFile(const std::string&,std::vector<Job>&, Logger&);
void fifoScheduling(std::vector<Job>& , Logger& );
void priorityScheduling(std::vector<Job>& , Logger& );
void executeJobs(std::vector<Job>&, Logger&);

void exportLog(const std::string& filename );

// Main Application
int main() {
    Logger logger("job_log.txt");
    std::vector<Job> jobs;
    void (*funcPtr)(std::vector<Job>&, Logger & ) = nullptr;

    while (true) {
        std::cout << "\n==== JobChain Scheduler ====\n"
            << "1. Load jobs from file\n"
            << "2. Choose scheduling algorithm\n"
            << "   a. FIFO (Job ID)\n"
            << "   b. Priority-based\n"
            << "3. Execute jobs\n"
            << "4. Export log\n"
            << "5. Exit\n> ";

        std::string choice;
        std::cin >> choice;

        if (choice == "1") {
            jobs.clear();
            loadJobsFromFile("jobs.txt", jobs, logger);
        }
        else if (choice == "2a") {
            funcPtr = fifoScheduling;
            logger.log(INFO, "Selected FIFO Scheduling.");
        }
        else if (choice == "2b") {
            funcPtr = priorityScheduling;
            logger.log(INFO, "Selected Priority Scheduling.");
        }
        else if (choice == "3") {
            if (!funcPtr) {
                logger.log(WARNING, "No scheduling algorithm selected.");
            }
            else {
                funcPtr(jobs, logger);
                executeJobs(jobs, logger);
            }
        }
        else if (choice == "4") {
            exportLog("job_log.txt");
            logger.log(INFO, "Displayed log from job_log.txt.");
        }
        else if (choice == "5")
        {
            break;
        }
        else {
            logger.log(WARNING, "Invalid menu option selected.");
        }
    }

    std::cout << "the app has ended:" << std::endl;

    return 0;
}

void exportLog(const std::string& filename = "job_log.txt")
{
    std::ifstream fin;
    fin.open(filename);
    if (!fin.is_open()) {
        std::cerr << "Failed to open log file for export.\n";
        return;
    }

    std::cout << "\n===== Exported Log =====\n";
    std::string line;
    while (std::getline(fin, line)) {
        std::cout << line << '\n';
    }
    std::cout << "=========================\n";
    fin.close();
}





void executeJobs(std::vector<Job>& jobs, Logger& logger) {
    auto start = std::chrono::high_resolution_clock::now();
    for (const auto& job : jobs) {
        logger.log(DEBUG, "Executing Job ID: " + std::to_string(job.jobID) +
            " | Priority: " + std::to_string(job.priority));

        std::this_thread::sleep_for(std::chrono::milliseconds(job.executionTime));
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    logger.log(INFO, "All jobs executed in " + std::to_string(duration) + "ms.");
}



void priorityScheduling(std::vector<Job>& jobs, Logger& logger)
{
    logger.log(DEBUG, "Sorting jobs by priority...");
    std::sort(jobs.begin(), jobs.end(), [](Job& a, Job& b){return b.priority < a.priority;});
    for (const auto& job : jobs) 
    {
        std::ostringstream oss;   //doesnt need to use to_string
        oss << "Job " << job.jobID << " | Priority " << job.priority << " | ExecTime "
            << job.executionTime << "ms";
        logger.log(DEBUG, oss.str());
    }
}
void fifoScheduling(std::vector<Job>& jobs, Logger& logger)
{
    // lambda function to comapare id
    std::sort(jobs.begin(), jobs.end(), [](Job& a, Job& b) {return a.jobID < b.jobID;});
    logger.log(DEBUG, "Sorted jobs using FIFO (Job ID).");
}




bool loadJobsFromFile(const std::string& filename, std::vector<Job>& jobs,  Logger& logger)
{
    std::ifstream fin;//(filename);
    fin.open(filename, std::ios::in);
    if (!fin.is_open())
    {
        std::cerr << "file unable to open " << std::endl;
        logger.log(ERROR, "File could not be opened.");
        return false;
    }
    /*
    Arguments: push_back takes an object, while emplace_back takes constructor arguments.
            jobs.push_back(Job(id, time, prio));
    */
    int id, time, prio;
    while (fin >> id >> time >> prio) //eof () => 0
    {
        jobs.emplace_back(id, time, prio); //calls constructor dorectly no copy/move required
    }
    // logs the size of vector
    logger.log(INFO, "Successfully loaded " + std::to_string(jobs.size()) + " jobs.");
    return true;

}