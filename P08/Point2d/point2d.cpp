#include <iostream>
#include <cmath>
#include "Point2d.h"
using namespace std;

void Point2d::translate(const Point2d& t) {
    this->x += t.get_x();
    this->y += t.get_y();
}

double Point2d::distance_to(const Point2d& p) const {
    double dx = this->x - p.get_x();
    double dy = this->y - p.get_y();
    return sqrt(dx * dx + dy * dy);
}

int main() {
    return 0;
}