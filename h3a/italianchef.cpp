#include "italianchef.h"

ItalianChef::ItalianChef(string name)
    : Chef(name)
{
    cout << "ItalianChef constructor: " << name << endl;
}

ItalianChef::~ItalianChef() {
    cout << "ItalianChef destructor" << endl;
}

void ItalianChef::makePasta() {
    cout << getName() << " makes pasta" << endl;
}

string ItalianChef::getName() {
    return Chef::getName();
}
