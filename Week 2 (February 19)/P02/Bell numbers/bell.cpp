#include <iostream>
using namespace std;

unsigned long factorial(unsigned long n)
{
    return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

unsigned long bc(unsigned long n, unsigned long k)
{
    return factorial(n) / (factorial(k) * factorial(n - k));
}

unsigned long bell(unsigned long n)
{
    unsigned long result = 0;
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        for (unsigned long i = 0; i < n; i++)
        {
            result += bc(n - 1, i) * bell(i);
        }
        return result;
    }
}

int main()
{
    return 0;
}