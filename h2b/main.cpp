#include <iostream>
#include <vector>
using namespace std;

#include "car.h"

int main()
{

    vector<Car> carList;


    carList.emplace_back("Saab", "900", 1991);
    carList.emplace_back("Kia", "Ceed", 2022);
    carList.emplace_back("Ford", "Taunus", 1975);


    cout << "Toisen auton tiedot:" << endl;
    carList[1].printData();
    cout << endl;


    cout << "Kaikki autot listassa:" << endl;
    for (const Car &c : carList) {
        c.printData();
    }

    return 0;
}
