#include <iostream>
#include <cmath>
#include "complex.h"
using namespace std;

void add(const complex &a, const complex &b, complex &r)
{
    r.x = a.x + b.x;
    r.y = a.y + b.y;
}

void mul(const complex &a, const complex &b, complex &r)
{
    r.x = (a.x * b.x) - (a.y * b.y);
    r.y = (a.x * b.y) + (b.x * a.y);
}

double norm(const complex &c)
{
    return sqrt(pow(c.x, 2) + pow(c.y, 2));
}

void mandelbrot(const complex &c, unsigned int n, complex &z_n)
{
    complex z_k = {0.0, 0.0};
    for (unsigned int k = 1; k <= n; ++k)
    {
        complex z_squared;
        mul(z_k, z_k, z_squared);
        add(z_squared, c, z_k);
        if (k == n)
        {
            z_n = z_k;
        }
    }
}

int main()
{
    return 0;
}