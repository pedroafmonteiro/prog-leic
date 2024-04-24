#include <iostream>
#include <cmath>
#include "Polygon.h"

void Polygon::add_vertex(int position, const Point& point) {
    vertices.insert(vertices.begin() + position - 1, point);
}

bool Polygon::get_vertex(int position, Point& point) const {
    if (position < 1 || position > static_cast<int>(vertices.size())) {
        return false;
    }
    point = vertices[position - 1];
    return true;
}

double Polygon::perimeter() const {
    double perim = 0;
    for (size_t i = 0; i < vertices.size(); ++i) {
        int j = (i + 1) % vertices.size();
        int dx = vertices[i].getX() - vertices[j].getX();
        int dy = vertices[i].getY() - vertices[j].getY();
        perim += std::sqrt(dx*dx + dy*dy);
    }
    return perim;
}

void Polygon::show() const {
    std::cout << "{";
    for (const Point& p : vertices) {
        p.show();
    }
    std::cout << "}";
}

int main() {
    return 0;
}