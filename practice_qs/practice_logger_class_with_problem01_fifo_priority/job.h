#pragma once
class Job {

    int jobID;
    int executionTime;
    int priority;
public:
    Job(int joid,int execution,int prior):
        jobID(joid),executionTime(execution),priority(prior){}

};