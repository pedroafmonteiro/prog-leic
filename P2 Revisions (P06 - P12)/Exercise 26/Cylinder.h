#ifndef __cylinder_h__
#define __cylinder_h__

#include "Solid.h"
#include <cmath>

class Cylinder : public Solid {
    public:
        Cylinder(const point& c, const double& r, const double& h) : Solid(c), radius_(r), height_(h) { };
        const double& radius() const { return radius_; };
        const double& height() const { return height_; };
        double area() const {
            return 2 * M_PI * radius_ * (radius_ + height_);
        }
    private:
        double radius_, height_;
};

#endif