#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
    public:
        Rectangle(const point& center, const double& width, const double& height) : Shape(center), width_(width), height_(height) { };
        double area() const { return width_ * height_; };
        double perimeter() const {return (2 * width_) + (2 * height_); };
        bool contains(const point& p) const { 
            double left = get_center().x - (width_ / 2.0);
            double right = get_center().x + (width_ / 2.0);
            double top = get_center().y + (height_ / 2.0);
            double bottom = get_center().y - (height_ / 2.0);
            
            if (p.x >= left && p.x <= right && p.y >= bottom && p.y <= top) {
                return true;
            } else {
                return false;
            }
        };
    private:
        double width_, height_;
};

#endif