#include "animal.h"

Animal::Animal() {
    cout << "Animal constructor" << endl;
}

Animal::~Animal() {
    cout << "Animal destructor" << endl;
}

void Animal::callOut() {
    cout << "Eläin ääntelee." << endl;
}
