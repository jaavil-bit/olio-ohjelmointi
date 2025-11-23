#include <iostream>
#include "animal.h"
#include "dog.h"
using namespace std;

int main() {

    cout << "--- Animal object ---" << endl;
    Animal a;
    a.callOut();

    cout << "\n--- Dog object ---" << endl;
    Dog d;
    d.callOut();

    cout << "\n--- Polymorphismi ---" << endl;
    Animal* poly = new Dog();
    poly->callOut();

    delete poly;

    return 0;
}
