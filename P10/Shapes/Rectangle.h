#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle:public Shape {
public:
    Rectangle(const point& center, const double& width, const double& height) : Shape(center) {
        width_ = width;
        height_ = height;
    }
    const double& get_width() const {
        return width_;
    }
    const double& get_height() const {
        return height_;
    }
    double area() const {
        return get_width() * get_height();
    }
    double perimeter() const {
        return 2.0 * get_width() + 2.0 * get_height();
    }
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
    }
protected:
    double width_;
    double height_;
};

#endif