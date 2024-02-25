#include <iostream>
using namespace std;

int adigits(int a, int b, int c)
{
    if (a > b && a > c)
    {
        if (b > c)
        {
            return a * 100 + b * 10 + c;
        }
        else
        {
            return a * 100 + c * 10 + b;
        }
    }
    else if (b > a && b > c)
    {
        if (a > c)
        {
            return b * 100 + a * 10 + c;
        }
        else
        {
            return b * 100 + c * 10 + a;
        }
    }
    else
    {
        if (a > b)
        {
            return c * 100 + a * 10 + b;
        }
        else
        {
            return c * 100 + b * 10 + a;
        }
    }
}

int main()
{
    cout << adigits(1, 2, 3) << '\n';
    return 0;
}