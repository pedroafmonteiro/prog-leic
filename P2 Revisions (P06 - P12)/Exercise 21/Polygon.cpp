#include "Polygon.h"
#include <iostream>
#include <cmath>

using namespace std;

Polygon::Polygon() : vertices_({ }) { }

Polygon::Polygon(vector<Point> vertices) : vertices_(vertices) { }

bool Polygon::get_vertex(const int n, Point& c)
{
    if (n == 0) {
        return false;
    } else if (n - 1 >= int(vertices_.size())) {
        return false;
    } else {
        c = vertices_.at(n - 1);
        return true;
    }
    return false;
}

void Polygon::add_vertex(const int n, const Point &c)
{
    vertices_.insert(vertices_.begin() + n - 1, c);
}

double Polygon::perimeter()
{
    double result = 0.0;
    for (size_t i = 0; i < vertices_.size() - 1; i++) {
        if (vertices_[i].get_x() == vertices_[i + 1].get_x()) {
            result += abs(vertices_[i + 1].get_y() - vertices_[i].get_y());
        } else if (vertices_[i].get_y() == vertices_[i + 1].get_y()) {
            result += abs(vertices_[i + 1].get_x() - vertices_[i].get_x());
        } else {
            result += sqrt(pow(vertices_[i + 1].get_y() - vertices_[i].get_y(), 2) + pow(vertices_[i + 1].get_x() - vertices_[i].get_x(), 2));
        }
    }
    if (vertices_.back().get_x() == vertices_.front().get_x()) {
        result += abs(vertices_.back().get_y() - vertices_.front().get_y());
    } else if (vertices_.back().get_y() == vertices_.front().get_y()) {
        result += abs(vertices_.back().get_x() - vertices_.front().get_x());
    } else {
        result += sqrt(pow(vertices_.back().get_y() - vertices_.front().get_y(), 2) + pow(vertices_.back().get_x() - vertices_.front().get_x(), 2));
    }
    return result;
}

void Polygon::show() const
{
    cout << '{';
    for (size_t i = 0; i < vertices_.size(); i++) {
        vertices_[i].show();
    }
    cout << '}';
}
