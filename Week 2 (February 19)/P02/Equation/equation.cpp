#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int solve_eq(int a, int b, int c, double &x1, double &x2)
{
    int count;
    int delta = pow(b, 2) - 4 * a * c;
    if (delta < 0)
    {
        x1 = NAN;
        x2 = NAN;
        count = 0;
    }
    else if (delta == 0)
    {
        x1 = (-b) / (2.0 * a);
        x2 = NAN;
        count = 1;
    }
    else
    {
        x1 = (-b - sqrt(delta)) / (2.0 * a);
        x2 = (-b + sqrt(delta)) / (2.0 * a);
        count = 2;
    }
    return count;
}

int main()
{
    return 0;
}