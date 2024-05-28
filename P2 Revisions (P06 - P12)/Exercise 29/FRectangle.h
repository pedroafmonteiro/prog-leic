#ifndef __F_Rectangle_h__
#define __F_Rectangle_h__

#include "Figure.h"
#include <iostream>

using namespace std;

class FRectangle : public Figure {
    public:
        FRectangle(double x_center=0, double y_center=0, double width=0, double height=0) : Figure(x_center, y_center), width_(width), height_(height) { };
        void draw() const {
            cout << "R(" << x_center_ << ',' << y_center_ << ")(" << width_ << ',' << height_ << ')';
        }
        ~FRectangle() { };
    private:
        double width_, height_;
};

#endif