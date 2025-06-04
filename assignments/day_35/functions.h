#pragma once

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

bool loadJobsFromFile(const std::string&, std::vector<Job>&, Logger&);
void fifoScheduling(std::vector<Job>&, Logger&);
void priorityScheduling(std::vector<Job>&, Logger&);
void executeJobs(std::vector<Job>&, Logger&);

void exportLog(const std::string& filename);


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
    std::sort(jobs.begin(), jobs.end(), [](Job& a, Job& b) {return b.priority < a.priority;});
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




bool loadJobsFromFile(const std::string& filename, std::vector<Job>& jobs, Logger& logger)
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