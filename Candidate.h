//
// Created by Student on 3/6/2024.
//

#ifndef JOBSEARCH_CANDIDATE_H
#define JOBSEARCH_CANDIDATE_H

#include "Apply.h"

class Candidate {
public:
    Candidate();
    Candidate(char* id, char* password, int forgetPassQ, char* forgetPassA, char* fName,
              char* lName, char* email, char* phone , int age,
              char* address, char* profession, char* about);
    Candidate(const Candidate& candidate);
    Candidate& operator= (const Candidate& candidate);
    ~Candidate();
    void printProfile();
    void addApply(int id);
    int deleteApply(int index);
    void updateDetails();
    void setPassword(char* password);
    char* getId();
    void setCv(char *cv);


    friend class ManagementSystem;

private:
    char* id ;
    char* password ;
    int forgetPassQ ;
    char* forgetPassA ;
    char* fName;
    char* lName;
    char* email;
    char* phone;
    int age;
    char* address;
    char* profession;
    char* about;
    bool isCv;
    char* CV;
    int numOfSub;
    Apply* submissions;
};


#endif //JOBSEARCH_CANDIDATE_H
