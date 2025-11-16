#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;

class Rectangle
{
public:
    Rectangle();

    void setWidth(double width);
    void setHeight(double height);

    double getArea() const;
    double getCircum() const;

private:
    double width;
    double height;
};

#endif
