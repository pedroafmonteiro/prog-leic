#include <iostream>
#include "complex.h"
using namespace std;

void add(const complex &a, const complex &b, complex &r)
{
    r.real = a.real + b.real;
    r.img = a.img + b.img;
}

void mul(const complex &a, const complex &b, complex &r)
{
    r.real = (a.real * b.real) - (a.img * b.img);
    r.img = (a.real * b.img) + (b.real * a.img);
}

void mandelbrot(const complex &c, int n, complex &z_n)
{
    complex z_k = {0, 0};
    for (int k = 1; k <= n; ++k)
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

void mandel(complex c, int n, complex z[]) {
    for (int i =0; i<n; i++) {
        mandelbrot(c,i,z[i]);
    }
}
int main() {
    { complex c = { 0, 0 };
  const int n = 1;
  complex z[n];
  mandel(c, n, z);
  print(z, n); }
    return 0;
}