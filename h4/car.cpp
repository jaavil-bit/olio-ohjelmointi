#include "car.h"
#include <iostream>

Car::Car() : brand("unknown"), model("unknown") {}

Car::Car(string brand, string model)
    : brand(brand), model(model) {}

void Car::setEngine() {
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

void Car::setWheels() {
    objWheel1.setSize(17);
    objWheel1.setType("kesarengas");

    objWheel2.setSize(17);
    objWheel2.setType("kesarengas");

    objWheel3.setSize(17);
    objWheel3.setType("kesarengas");

    objWheel4.setSize(17);
    objWheel4.setType("kesarengas");
}

string Car::getModel() const {
    return model;
}

void Car::setModel(string m) {
    model = m;
}

string Car::getBrand() const {
    return brand;
}

void Car::setBrand(string b) {
    brand = b;
}

void Car::printDetails() const {
    cout << "Auton merkki: " << brand << endl;
    cout << "Auton malli: " << model << endl << endl;

    cout << "Moottori:" << endl;
    cout << "  Hevosvoimat: " << objEngine.getHorsepower() << endl;
    cout << "  Tilavuus: " << objEngine.getDisplacement() << " L" << endl << endl;

    cout << "Renkaat:" << endl;
    cout << "  Rengas 1: " << objWheel1.getSize() << "\" " << objWheel1.getType() << endl;
    cout << "  Rengas 2: " << objWheel2.getSize() << "\" " << objWheel2.getType() << endl;
    cout << "  Rengas 3: " << objWheel3.getSize() << "\" " << objWheel3.getType() << endl;
    cout << "  Rengas 4: " << objWheel4.getSize() << "\" " << objWheel4.getType() << endl;
}
