#include "wheel.h"

Wheel::Wheel() : size(0), type("unknown") {}

Wheel::Wheel(int size, string type)
    : size(size), type(type) {}

int Wheel::getSize() const {
    return size;
}

void Wheel::setSize(int s) {
    size = s;
}

string Wheel::getType() const {
    return type;
}

void Wheel::setType(string t) {
    type = t;
}
