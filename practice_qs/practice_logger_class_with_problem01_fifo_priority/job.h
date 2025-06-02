#pragma once
class Job {
public:
    int jobID;
    int executionTime;
    int priority;
    Job(int joid,int execution,int prior):
        jobID(joid),executionTime(execution),priority(prior){}
};