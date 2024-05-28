#ifndef POINT_H
#define POINT_H

class Point {
    public:
        Point();
        Point(int x, int y);
        int get_x();
        int get_y();
        void show() const;
    private:
        int x_, y_;
};

#endif