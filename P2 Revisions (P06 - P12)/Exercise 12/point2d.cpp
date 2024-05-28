#include <cmath>
#include "Point2d.h"

using namespace std;

void Point2d::translate(const Point2d& t) {
    x = x + t.x;
    y = y + t.y;
}

double Point2d::distance_to(const Point2d& p) const {
    return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
}

int main() {
    return 0;
}