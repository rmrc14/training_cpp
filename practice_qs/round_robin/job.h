#pragma once

class Job {
public:
    int jobID;
    int executionTime;  // total time in ms
    int priority;
    int remainingTime;  // used for Round-Robin

    Job(int id, int time, int prio)
        : jobID(id), executionTime(time), priority(prio), remainingTime(time) {}
};
