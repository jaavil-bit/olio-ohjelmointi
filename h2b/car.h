#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>
using namespace std;

class Car
{
public:
    // Konstruktori
    Car(const string &brand, const string &model, int yearModel);

    // Tulostusmetodi
    void printData() const;

private:
    string brand;
    string model;
    int yearModel;
};

#endif // CAR_H
