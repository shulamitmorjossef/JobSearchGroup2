//
// Created by Student on 3/6/2024.
//

#include "Job.h"
#include <string>
#include <iostream>
#include <cstring>
#include <limits>
using namespace std;


Job::Job(){
    id = 1;
    businessName = NULL;
    jobProfession = NULL;
    address = NULL;
    salary = NULL;
    about = NULL;
    jobType = 0;
    jobHours = 0;
    experience = 0;
    jobArea = 0;
    age = 0;
    jobFor = 0;
    jobRange = 0;
//    for (int i = 0; i < numOfSub; ++i) {
//        idOfSub[i] = NULL;
//    }
    status = false;
    idOfSub = NULL;
    numOfSub = 0;
}

Job:: Job(int id, char* businessName, char* jobProfession, char* address,  char* salary, char* about,
          int jobType, int jobHours, int experience, int jobArea, int age, int jobFor, int jobRange){

    this->idOfSub = NULL;

    this->id = id;

    this-> businessName = new char [strlen(businessName)+1];
    strcpy(this->businessName, businessName);

    this-> jobProfession = new char [strlen(jobProfession)+1];
    strcpy(this->jobProfession, jobProfession);

    this-> address = new char [strlen(address)+1];
    strcpy(this->address, address);

    this->salary = new char [strlen(salary)+1];
    strcpy(this->salary,salary);

    this-> about = new char [strlen(about)+1];
    strcpy(this->about, about);

    this-> jobType = jobType;

    this-> jobHours = jobHours;

    this-> experience = experience;

    this-> age = age;

    this-> jobArea = jobArea;

    this-> jobFor = jobFor;

    this-> jobRange = jobRange;

    this->status = true;

    this->numOfSub = 0;
}

Job:: Job( const Job& job){

    this->id = job.id;

    this-> businessName = new char [strlen(job.businessName)+1];
    strcpy(this->businessName, job.businessName);

    this-> jobProfession = new char [strlen(job.jobProfession)+1];
    strcpy(this->jobProfession, job.jobProfession);

    this-> address = new char [strlen(job.address)+1];
    strcpy(this->address, job.address);

    this->salary = new char [strlen(job.salary)+1];
    strcpy(this->salary,job.salary);

    this-> about = new char [strlen(job.about)+1];
    strcpy(this->about, job.about);

    this-> jobType = job.jobType;

    this-> jobHours = job.jobHours;

    this-> experience = job.experience;

    this-> age = job.age;

    this-> jobArea = job.jobArea;

    this-> jobFor = job.jobFor;

    this-> jobRange = job.jobRange;

    this->status = job.status;

    this->numOfSub = job.numOfSub;

    if (job.numOfSub != 0) {

        this->idOfSub = new char *[numOfSub];
        for (int i = 0; i < numOfSub; ++i) {
            this->idOfSub[i] = new char[strlen(job.idOfSub[i] + 1)];
            strcpy(this->idOfSub[i], job.idOfSub[i]);
        }
    } else
        this->idOfSub = NULL;
}

Job& Job:: operator= (const Job& job){

    this->id = job.id;

    delete [] businessName;
    this-> businessName = new char [strlen(job.businessName)+1];
    strcpy(this->businessName, job.businessName);

    delete [] jobProfession;
    this-> jobProfession = new char [strlen(job.jobProfession)+1];
    strcpy(this->jobProfession, job.jobProfession);

    delete [] address;
    this-> address = new char [strlen(job.address)+1];
    strcpy(this->address, job.address);

    delete [] salary;
    this->salary = new char [strlen(job.salary)+1];
    strcpy(this->salary,job.salary);

    delete [] about;
    this-> about = new char [strlen(job.about)+1];
    strcpy(this->about, job.about);

    this-> jobType = job.jobType;

    this-> jobHours = job.jobHours;

    this-> experience = job.experience;

    this-> age = job.age;

    this-> jobArea = job.jobArea;

    this-> jobFor = job.jobFor;

    this-> jobRange = job.jobRange;

    this->status = job.status;

    for (int i = 0; i < this->numOfSub; ++i)
        delete [] this->idOfSub[i];

    delete[] this->idOfSub;

    this->numOfSub = job.numOfSub;

    this->idOfSub = new char* [this->numOfSub];
    for (int i = 0; i < this->numOfSub; ++i) {
        this->idOfSub[i] = new char[strlen(job.idOfSub[i]) + 1];
        strcpy(this->idOfSub[i], job.idOfSub[i]);
    }

    //return *this;
}

Job:: ~Job(){
    delete [] businessName;
    delete [] jobProfession;
    delete [] address;
    delete [] salary;
    delete [] about;
    for (int i = 0; i < numOfSub; ++i) {
        delete [] idOfSub[i];
    }
    delete [] idOfSub;
}

void Job::updateJob(){
    string newValue;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "For each field enter a new value (or press Enter to skip): \n";
    cout << "Business Name: " << businessName;
    getline(cin, newValue);
    if(!newValue.empty()) {
        delete [] businessName;
        businessName = new char[newValue.size() + 1];
        strcpy(businessName, newValue.c_str());
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Profession: " << jobProfession;
    getline(cin, newValue);
    if(!newValue.empty()) {
        delete [] jobProfession;
        jobProfession = new char[newValue.size() + 1];
        strcpy(jobProfession, newValue.c_str());
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Address: " << address;
    getline(cin, newValue);
    if(!newValue.empty()) {
        delete [] address;
        address = new char[newValue.size() + 1];
        strcpy(address, newValue.c_str());
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Salary: " << salary;
    getline(cin, newValue);
    if(!newValue.empty()) {
        delete [] salary;
        salary= new char[newValue.size() + 1];
        strcpy(salary, newValue.c_str());
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "About the job: " << about;
    getline(cin, newValue);
    if(!newValue.empty()) {
        delete [] about;
        about = new char[newValue.size() + 1];
        strcpy(about, newValue.c_str());
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "The job is: ";
    if(jobType == 1)
        cout << "Full time job.\n";
    else
        cout << "Part time job.\n";
    cout << "Press 1/2/enter\nFull time job (1)\nPart time job (2)\n";
    getline(cin, newValue);

    if(!newValue.empty()) {
//        while ((jobType != 1 && jobType != 2)|| cin.peek() != '\n') {
//            if (!(cin>>jobType)) {
//                cin.clear();
//                cin.ignore(numeric_limits<streamsize>::max(), '\n');
//                jobType=-2;
//            }
//            cout << "Try again, enter your choose:\n" ;
//            cin >> jobType;
//        }
        if(newValue == "1" || newValue == "2"){
            jobType =  stoi(newValue);
//            cout<<"The input has been updated, press enter to continue";
//            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else{
            cout << "Invalid input. The field remains the same, press enter to continue";
//            cin.ignore(numeric_limits<streamsize>::max(), '\n');

        }

    }
    cout << "Hours of job: " ;
    if(jobHours == 1)
        cout << "Morning hours.\n";
    else
        cout << "Evening hours.\n";
    cout << "Press 1/2/enter\nMorning hours (1)\nEvening hours (2)\n";
    getline(cin, newValue);
    if(!newValue.empty()) {
        if(newValue == "1" || newValue == "2"){
            jobHours =  stoi(newValue);
//            cout<<"The input has been updated, press enter to continue";
//            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else{
            cout << "Invalid input. The field remains the same\n";
//            cin.ignore(numeric_limits<streamsize>::max(), '\n');

        }
    }
    cout << "Experience required: ";
    if(experience == 1)
        cout << "Inexperienced.\n";
    else if(experience == 2)
        cout << "Up to three years.\n";
    else
        cout << "Three years or more.\n";
    cout << "Press 1/2/3/enter\nInexperienced (1)\nUp to three years (2)\nThree years or more (3)\n";
    getline(cin, newValue);
    if(!newValue.empty()) {
        if(newValue == "1" || newValue == "2"|| newValue== "3"){
            experience =  stoi(newValue);
//            cout<<"The input has been updated, press enter to continue";
//            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else{
            cout << "Invalid input. The field remains the same\n";
//            cin.ignore(numeric_limits<streamsize>::max(), '\n');

        }
    }
    cout << "Area of job: ";
    if(jobArea == 1)
        cout << "North.\n";
    else if(jobArea == 2)
        cout << "Center.\n";
    else
        cout << "South.\n";
    cout << "Press 1/2/3/enter\nNorth (1)\nCenter (2)\nSouth (3)\n";
    getline(cin, newValue);
    if(!newValue.empty()) {
        if(newValue == "1" || newValue == "2"||newValue=="3"){
            jobArea =  stoi(newValue);
            cout<<"The input has been updated, press enter to continue";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else{
            cout << "Invalid input. The field remains the same"<< endl;}
    }
    cout << "Age required: " ;
    if(age == 1)
        cout << "Up to 18.\n";
    else if(age == 2)
        cout << "18-24.\n";
    else
        cout << "24 and above.\n";
    cout << "Press 1/2/3/enter\nUp to 18 (1)\n18-24 (2)\n24 and above (3)\n";
    if(!newValue.empty()) {
        if(newValue == "1" || newValue == "2"||newValue=="3"){
            age =  stoi(newValue);
//            cout<<"The input has been updated, press enter to continue";
//            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else{
            cout << "Invalid input. The field remains the same"<< endl;}
    }
    cout << "Suitable for: " ;
    if(jobFor == 1)
        cout << "Students.\n";
    else if(jobFor == 2)
        cout << "Soldiers.\n";
    else if(jobFor == 3)
        cout << "Pupils.\n";
    else
        cout << "Not a special job.\n";
    cout << "Press 1/2/3/4/enter\nStudents (1)\nSoldiers (2)\nPupils (3)\nElse (4)\n";
    if(!newValue.empty()) {
        if(newValue == "1" || newValue == "2"||newValue=="3"||newValue=="4"){
            jobFor =  stoi(newValue);
//            cout<<"The input has been updated, press enter to continue";
//            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else{
            cout << "Invalid input. The field remains the same"<< endl;}
    }
    cout << "Range: " ;
    if(jobRange == 1)
        cout << "Short term job.\n";
    else
        cout << "Long term job.\n";
    cout << "Press 1/2/enter\nShort term job (1)\nLong term job (2)\n";
    getline(cin, newValue);
    if(!newValue.empty()) {
        if(newValue == "1" || newValue == "2"){
            jobRange =  stoi(newValue);
//            cout<<"The input has been updated, press enter to continue";
//            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else{
            cout << "Invalid input. The field remains the same"<< endl;}
    }
    if(!status) {
        cout << "The job is not available, click 1 to post it again or enter to continue\n";
        getline(cin, newValue);
        if(!newValue.empty()) {
            if (newValue == "1") {
                status = true;
                cout << "The job status has been updated, the job is now available for candidate\n";
            }
            else{
                cout << "Invalid input. The field remains the same"<< endl;}
        }
    }
    cout << "The job details have been successfully updated!\n";
    cout << "--------------------------------------------------------------------------------------------------------------\n";
}

void Job::addSub(char *id) {
    char** tmp = new char* [numOfSub + 1];
    for (int i = 0; i < numOfSub; ++i) {
        tmp[i] = new char [strlen(idOfSub[i])+1];
        strcpy(tmp[i], idOfSub[i]);
    }
    tmp[numOfSub] = new char [strlen(id)+1];
    strcpy(tmp[numOfSub], id);
    delete [] idOfSub;
    idOfSub = tmp;
    numOfSub++;
}

void Job::deleteSub(char *id) {

    if (numOfSub <= 1){
        delete [] idOfSub;
        numOfSub = 0;
        idOfSub = NULL;
    } else {
        char **tmp = new char *[numOfSub - 1];
        int index = 0;
        while (strcmp(idOfSub[index], id) != 0) {
            tmp[index] = new char[strlen(idOfSub[index])];
            strcpy(tmp[index], idOfSub[index]);
            index++;
        }

        for (int i = index; i < numOfSub; ++i) {
            if (strcmp(idOfSub[i], id) != 0) {
                tmp[i] = new char[strlen(idOfSub[i + 1])];
                strcpy(tmp[i], idOfSub[i + 1]);
            }
        }
        delete[] idOfSub;
        idOfSub = tmp;
        numOfSub--;
    }
}

void Job::printForCand(){
//    cout << "ID: \n" << id << endl << endl;
    cout << "Business Name: \n" << businessName <<".\n\n";
    cout << "Profession: \n" << jobProfession << ".\n\n";
    cout << "Address: \n" << address << ".\n\n";
    cout << "salary: \n" << salary << ".\n\n";
    cout << "About the job: \n" << about << ".\n\n";
    cout << "Type of job: \n";
    if(jobType == 1)
        cout << "Full time job.\n\n";
    else
        cout << "Part time job.\n\n";
    cout << "Hours of job: \n" ;
    if(jobHours == 1)
        cout << "Morning hours.\n\n";
    else
        cout << "Evening hours.\n\n";
    cout << "Experience required: \n";
    if(experience == 1)
        cout << "Inexperienced.\n\n";
    else if(experience == 2)
        cout << "Up to three years.\n\n";
    else
        cout << "Three years or more.\n\n";
    cout << "Area of job: \n";
    if(jobArea == 1)
        cout << "North.\n\n";
    else if(jobArea == 2)
        cout << "Center.\n\n";
    else
        cout << "South.\n\n";
    cout << "Age required: \n" ;
    if(jobArea == 1)
        cout << "Up to 18.\n\n";
    else if(jobArea == 2)
        cout << "18-24.\n\n";
    else
        cout << "24 and above.\n\n";
    cout << "Suitable for: \n" ;
    if(jobFor == 1)
        cout << "Students.\n\n";
    else if(jobFor == 2)
        cout << "Soldiers.\n\n";
    else if(jobFor == 3)
        cout << "Pupils.\n\n";
    else
        cout << "Not a special job.\n\n";
    cout << "Range: \n" ;
    if(jobRange == 1)
        cout << "Short term job.\n\n";
    else
        cout << "Long term job.\n\n";

    cout << "--------------------------------------------------------------------------------------------------------------\n";
}

void Job::printForEmp() {
    cout << "Status: " ;
    if( status )
        cout << "Available.\n";
    else
        cout << "Unavailable.\n";
    this->printForCand();
}

void Job::printSubPro(Candidate* candidate, int len) {
    for(int i = 0; i < numOfSub; ++i)
        for(int j = 0; j < len; ++j)
            if(strcmp(idOfSub[i], candidate[j].getId()) == 0) {
                cout << i + 1 << ".\n";
                candidate[j].printProfile();
            }
}

void Job::setBusinessName( char* businessName)
{
    delete[]this->businessName;
    this->businessName=new char[strlen(businessName)+1];
    strcpy(this->businessName,businessName);
}

void Job::setJobProfession (char* jobProfession)
{
    delete[]this->jobProfession;
    this->jobProfession=new char[strlen(jobProfession)+1];
    strcpy(this->jobProfession,jobProfession);
}

void Job::setAddress (char* address)
{
    delete[]this->address;
    this->address=new char[strlen(address)+1];
    strcpy(this->address,address);
}

void Job::setSalary(char* salary)
{
    delete[]this->salary;
    this->salary=new char[strlen(salary)+1];
    strcpy(this->salary,salary);
}

void Job::setAbout(char* about)
{
    delete[]this->about;
    this->about=new char[strlen(about)+1];
    strcpy(this->about,about);
}

void Job::setStatus(bool status)
{
    this->status=status;
}

bool Job:: getStatus(){
    return status;
}