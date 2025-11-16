#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>
using namespace std;

class Car
{
public:

    Car(const string &brand, const string &model, int yearModel);


    void printData() const;

private:
    string brand;
    string model;
    int yearModel;
};

#endif
