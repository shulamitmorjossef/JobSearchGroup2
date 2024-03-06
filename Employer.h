//
// Created by Student on 3/6/2024.
//

#ifndef JOBSEARCH_EMPLOYER_H
#define JOBSEARCH_EMPLOYER_H

#include "Job.h"

class Employer {
    Employer();
    Employer(char* id, char* password, int forgetPassQ, char* forgetPassA );
    Employer(const Employer& employer );
    Employer& operator= (const Employer& employer);
    ~Employer();
    void printJobs();
    bool addJob(int id);
    void sortJobs();
    bool deleteJob(int index);
    void setPassword (char* password);


    friend class ManagementSystem;


private:
    char* id ;
    char* password ;
    int forgetPassQ ;
    char* forgetPassA ;
    int jobsNum;
    Job* jobs ;
};


#endif //JOBSEARCH_EMPLOYER_H
