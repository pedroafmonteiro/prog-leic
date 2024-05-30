#include "Solid3D.h"
#include <cmath>

using namespace std;

class Cone : public Solid3D {
public:
    Cone(const point& c, const double& r, const double& h) : Solid3D(c), r_(r), h_(h) { };
    const double radius() const { return r_; };
    const double height() const { return h_; };
    double volume() const {
        double result;
        result = (M_PI * pow(r_, 2) * h_) / 3.0;
        return result;
    };
private:
    double r_, h_;
};