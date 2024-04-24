#include <vector>
#include "Point.h"

#ifndef POLYGON_H
#define POLYGON_H

class Polygon {
public:
    Polygon() {}
    Polygon(const std::vector<Point>& vertices) : vertices(vertices) {}
    void add_vertex(int position, const Point& point);
    bool get_vertex(int position, Point& point) const;
    double perimeter() const;
    void show() const;
private:
    std::vector<Point> vertices;
};

#endif