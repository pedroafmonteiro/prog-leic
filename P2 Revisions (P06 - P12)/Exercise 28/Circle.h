#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include <cmath>

class Circle : public Shape {
    public:
        Circle(const point& center, const double& radius) : Shape(center), radius_(radius) { };
        double area() const { return M_PI * pow(radius_, 2); };
        double perimeter() const { return 2 * M_PI * radius_; };
        bool contains(const point& p) const {
            if ((pow((p.x - get_center().x), 2) + pow((p.y - get_center().y), 2)) <= pow(radius_, 2)) { return true; };
            return false;
        };
    private:
        double radius_;
};

#endif