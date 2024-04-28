#ifndef __Cylinder_h__
#define __Cylinder_h__

#include "Solid.h"

class Cylinder:public Solid {
public:
    Cylinder(point center, double radius, double height) : Solid(center) {
        radius_ = radius;
        height_ = height;
    }
    const double& radius() const {
        return radius_;
    }
    const double& height() const {
        return height_;
    }
    double area() const {
        return 2.0 * M_PI * radius() * (radius() + height());
    }
protected:
    double radius_;
    double height_;
};

#endif