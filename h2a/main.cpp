#include <iostream>
#include <memory>
using namespace std;

#include "car.h"
#include "rectangle.h"
#include "student.h"

int main()
{

    Car myCar;
    myCar.setBrand("Saab");
    myCar.setModel("900");
    myCar.setYearModel(1990);

    myCar.printData();


    Rectangle *rect = new Rectangle();
    rect->setWidth(6.0);
    rect->setHeight(12.0);

    cout << "Rectangle area: " << rect->getArea() << endl;
    cout << "Rectangle circum: " << rect->getCircum() << endl;

    delete rect;

    shared_ptr<Student> stu = make_shared<Student>();
    stu->setName("Kimmo Kala");
    stu->setStudentNumber(5122);
    stu->setAverage(4.5);

    cout << "Student: " << stu->getName()
         << ", number: " << stu->getStudentNumber()
         << ", average: " << stu->getAverage()
         << endl;

    return 0;
}
