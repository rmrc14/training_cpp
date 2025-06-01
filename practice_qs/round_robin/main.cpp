// main.cpp
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <thread>
#include <chrono>
#include <sstream>
#include "job.h"
#include "Logger.h"

bool loadJobsFromFile(const std::string&, std::vector<Job>&, Logger&);
void fifoScheduling(std::vector<Job>&, Logger&);
void priorityScheduling(std::vector<Job>&, Logger&);
void roundRobinScheduling(std::vector<Job>&, Logger&, int quantum = 100);
void executeJobs(std::vector<Job>&, Logger&);

int main() {
    Logger logger("job_log.txt");
    std::vector<Job> jobs;
    void (*funcPtr)(std::vector<Job>&, Logger&) = nullptr;

    while (true) {
        std::cout << "\n==== JobChain Scheduler ====\n"
            << "1. Load jobs from file\n"
            << "2. Choose scheduling algorithm\n"
            << "   a. FIFO (Job ID)\n"
            << "   b. Priority-based\n"
            << "   c. Round-Robin\n"
            << "3. Execute jobs\n"
            << "4. Exit\n> ";

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
        else if (choice == "2c") {
            funcPtr = nullptr;
            roundRobinScheduling(jobs, logger);
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
            break;
        }
        else {
            logger.log(WARNING, "Invalid menu option selected.");
        }
    }
    return 0;
}

bool loadJobsFromFile(const std::string& filename, std::vector<Job>& jobs, Logger& logger) {
    std::ifstream fin(filename);
    if (!fin.is_open()) {
        logger.log(ERROR, "File could not be opened.");
        return false;
    }
    int id, time, prio;
    while (fin >> id >> time >> prio) {
        jobs.emplace_back(id, time, prio);
    }
    logger.log(INFO, "Successfully loaded " + std::to_string(jobs.size()) + " jobs.");
    return true;
}

void fifoScheduling(std::vector<Job>& jobs, Logger& logger) {
    std::sort(jobs.begin(), jobs.end(), [](Job& a, Job& b) { return a.jobID < b.jobID; });
    logger.log(DEBUG, "Sorted jobs using FIFO (Job ID).\n");
}

void priorityScheduling(std::vector<Job>& jobs, Logger& logger) {
    logger.log(DEBUG, "Sorting jobs by priority...");
    std::sort(jobs.begin(), jobs.end(), [](Job& a, Job& b) { return b.priority < a.priority; });
    for (const auto& job : jobs) {
        std::ostringstream oss;
        oss << "Job " << job.jobID << " | Priority " << job.priority << " | ExecTime "
            << job.executionTime << "ms";
        logger.log(DEBUG, oss.str());
    }
}

void executeJobs(std::vector<Job>& jobs, Logger& logger) {
    auto start = std::chrono::high_resolution_clock::now();
    for (auto& job : jobs) {
        logger.log(DEBUG, "Executing Job ID: " + std::to_string(job.jobID));

        int half = job.executionTime / 2;
        std::this_thread::sleep_for(std::chrono::milliseconds(half));
        logger.log(INFO, "Paused Job ID: " + std::to_string(job.jobID));

        std::this_thread::sleep_for(std::chrono::milliseconds(200));
        logger.log(INFO, "Resumed Job ID: " + std::to_string(job.jobID));

        std::this_thread::sleep_for(std::chrono::milliseconds(job.executionTime - half));
        logger.log(INFO, "Completed Job ID: " + std::to_string(job.jobID));
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    logger.log(INFO, "All jobs executed (with pause/resume) in " + std::to_string(duration) + "ms.");
}

void roundRobinScheduling(std::vector<Job>& jobs, Logger& logger, int quantum) {
    logger.log(INFO, "Starting Round-Robin Scheduling (Quantum: " + std::to_string(quantum) + "ms)");
    std::queue<Job> jobQueue;
    for (auto& job : jobs) {
        job.remainingTime = job.executionTime;
        jobQueue.push(job);
    }
    auto start = std::chrono::high_resolution_clock::now();

    while (!jobQueue.empty()) {
        Job current = jobQueue.front();
        jobQueue.pop();

        logger.log(DEBUG, "Executing Job ID: " + std::to_string(current.jobID) +
            " | Remaining Time: " + std::to_string(current.remainingTime) + "ms");

        int execTime = std::min(current.remainingTime, quantum);
        std::this_thread::sleep_for(std::chrono::milliseconds(execTime));
        current.remainingTime -= execTime;

        if (current.remainingTime > 0) {
            jobQueue.push(current);
        }
        else {
            logger.log(INFO, "Completed Job ID: " + std::to_string(current.jobID));
        }
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    logger.log(INFO, "All jobs executed using Round-Robin in " + std::to_string(duration) + "ms.");
}
