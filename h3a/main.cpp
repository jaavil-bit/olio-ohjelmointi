#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main() {

    cout << "=== Chef test ===" << endl;
    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();

    cout << "\n=== ItalianChef test ===" << endl;
    ItalianChef italianChef("Anthony Bourdain");
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();
    cout << "Name: " << italianChef.getName() << endl;

    return 0;
}
