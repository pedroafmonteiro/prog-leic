#include "Point.h"
#include <iostream>

using namespace std;

Point::Point() : x_(0), y_(0) { }

Point::Point(int x, int y) : x_(x), y_(y) { }

int Point::get_x()
{
    return x_;
}

int Point::get_y()
{
    return y_;
}

void Point::show() const
{
    cout << '(' << x_ << ',' << y_ << ')';
}
