#ifndef POLYGON_H
#define POLYGON_H

#include "Point.h"
#include <vector>

using namespace std;

class Polygon {
    public:
        Polygon();
        Polygon(vector<Point> vertices);
        bool get_vertex(const int n, Point& c);
        void add_vertex(const int n, const Point& c);
        double perimeter();
        void show() const;
    private:
        vector<Point> vertices_;
};

#endif