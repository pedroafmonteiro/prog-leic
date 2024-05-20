#include <iostream>
#include "Point.h"

void Point::show() const {
    std::cout << "(" << x << "," << y << ")";
}