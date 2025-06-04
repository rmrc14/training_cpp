#pragma once
class Job {
public:
    int jobID;
    int executionTime; // in ms
    int priority;

    Job(int id, int time, int prio) : jobID(id), executionTime(time), priority(prio) {}
};
