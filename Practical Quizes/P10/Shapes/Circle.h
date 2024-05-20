#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include <cmath>

class Circle:public Shape {
public:
    Circle(const point& center, const double& radius) : Shape(center) {
        radius_ = radius;
    }
    const double& radius() const {
        return radius_;
    }
    double area() const {
        return M_PI * (pow(radius(), 2));
    }
    double perimeter() const {
        return 2.0 * M_PI * radius();
    }
    bool contains(const point& p) const {
        double distance = sqrt(pow(p.x - get_center().x, 2) + pow(p.y - get_center().y, 2));
        return distance <= radius();
    }
protected:
    double radius_;
};

#endif