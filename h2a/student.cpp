#include "Student.h"

Student::Student()
{
    name = "";
    studentNumber = 0;
    average = 0.0;
}

void Student::setName(const std::string &n) { name = n; }
void Student::setStudentNumber(int sn) { studentNumber = sn; }
void Student::setAverage(double a) { average = a; }

string Student::getName() const { return name; }
int Student::getStudentNumber() const { return studentNumber; }
double Student::getAverage() const { return average; }
