#include "chef.h"

Chef::Chef(string name) : name(name) {
    cout << "Chef constructor: " << this->name << endl;
}

Chef::~Chef() {
    cout << "Chef destructor: " << name << endl;
}

void Chef::makeSalad() {
    cout << name << " makes salad" << endl;
}

void Chef::makeSoup() {
    cout << name << " makes soup" << endl;
}

string Chef::getName() const {
    return name;
}
