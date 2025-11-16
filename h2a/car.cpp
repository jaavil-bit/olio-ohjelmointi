#include "car.h"

Car::Car()
{
    brand = "";
    model = "";
    yearModel = 0;
}

void Car::setBrand(const string &b) { brand = b; }
void Car::setModel(const string &m) { model = m; }
void Car::setYearModel(int y) { yearModel = y; }

void Car::printData() const
{
    cout << "Car brand: " << brand
         << ", model: " << model
         << ", year: " << yearModel
         << endl;
}
