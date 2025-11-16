#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>
using namespace std;

class Student
{
public:
    Student();

    void setName(const string &name);
    void setStudentNumber(int number);
    void setAverage(double avg);

    string getName() const;
    int getStudentNumber() const;
    double getAverage() const;

private:
    string name;
    int studentNumber;
    double average;
};

#endif
