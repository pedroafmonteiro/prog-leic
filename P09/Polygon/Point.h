#ifndef POINT_H
#define POINT_H

class Point {
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    int getX() const { return x; }
    int getY() const { return y; }
    void show() const;
private:
    int x, y;
};

#endif