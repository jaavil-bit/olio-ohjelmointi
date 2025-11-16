#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>
using namespace std;

class Car
{
public:
    Car();

    void setBrand(const string &brand);
    void setModel(const string &model);
    void setYearModel(int yearModel);

    void printData() const;

private:
    string brand;
    string model;
    int yearModel;
};

#endif
