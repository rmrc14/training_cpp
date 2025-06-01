/*
Project: JobChain – CPU Job Scheduling Simulator with Logging System

🚀 Assessment Problem Statement
	Build a menu-driven CPU Job Scheduling Simulator that loads a list of jobs 
	from a file and executes them according to selected scheduling strategies 
	such as FIFO (by Job ID) or Priority-based scheduling.

	You must implement a basic logging mechanism that supports log levels:



*/
#include "functions.h"

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

