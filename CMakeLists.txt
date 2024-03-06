cmake_minimum_required(VERSION 3.24)
project(jobSearch)

set(CMAKE_CXX_STANDARD 23)

add_executable(jobSearch main.cpp Apply.cpp Apply.h Employer.cpp Employer.h Candidate.cpp Candidate.h Job.cpp Job.h ManagementSystem.cpp ManagementSystem.h)
