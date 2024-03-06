//
// Created by Student on 3/6/2024.
//

#ifndef JOBSEARCH_APPLY_H
#define JOBSEARCH_APPLY_H


class Apply {
public:
    Apply();
    Apply(int id);
    Apply(const Apply & apply);
    void print();
    int getIdOfJob() const;
    bool isStatus() const;
    void setStatus(bool status);
    void setIdOfJob(int idOfJob);


    friend class ManagementSystem;


private:
    bool status;
    int idOfJob;
};


#endif //JOBSEARCH_APPLY_H
