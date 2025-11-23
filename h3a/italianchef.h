#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"
using namespace std;

class ItalianChef : public Chef {
public:
    ItalianChef(string name);
    ~ItalianChef();

    void makePasta();
    string getName();
};

#endif
