#include <iostream>
#include <cmath>
#include "complex.h"
using namespace std;

void add(const complex& a, const complex& b, complex& r) {
    r.x = a.x + b.x;
    r.y = a.y + b.y;
}

void mul(const complex& a, const complex& b, complex& r) {
    r.x = (a.x * b.x) - (a.y * b.y);
    r.y = (a.x * b.y) + (b.x * a.y);
}

double norm(const complex& c) {
    return sqrt(pow(c.x, 2) + pow(c.y, 2));
}

int main() {
    return 0;
}