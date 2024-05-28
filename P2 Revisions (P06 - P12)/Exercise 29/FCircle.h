#ifndef __F_Circle_h__
#define __F_Circle_h__

#include "Figure.h"
#include <iostream>

using namespace std;

class FCircle : public Figure {
    public:
        FCircle(double x_center=0, double y_center=0, double radius=0) : Figure(x_center, y_center), radius_(radius) { };
        void draw() const {
            cout << "C(" << x_center_ << ',' << y_center_ << ")(" << radius_ << ')';
        }
        ~FCircle() { };
    private:
        double radius_;
};

#endif