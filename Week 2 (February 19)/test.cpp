#include <iostream>
using namespace std;

void f(int &x, int &y, int z)
{
    if (x > y)
        x = z;
    else
        y = z;
}
int main()
{
    int a = 1, b = 2, c = 3;
    f(a, b, c);
    f(a, c, b);
    cout << a << ' ' << b << ' ' << c << '\n';
    return 0;
}