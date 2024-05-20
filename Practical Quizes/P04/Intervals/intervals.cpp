#include <iostream>
#include "interval.h"
using namespace std;

bool belong(interval a, time_of_day t)
{
    if ((t.h < a.start.h) || (t.h > a.end.h) || (t.h <= a.start.h && t.m < a.start.m) || (t.h >= a.end.h && t.m >= a.end.m))
        return false;
    return true;
}
int adder(interval a)
{
    int res = 0;

    if (a.end.m < a.start.m)
    {
        res = (60 - a.start.m) + a.end.m + (a.end.h - a.start.h - 1) * 60;
    }
    else
    {
        res = (a.end.h - a.start.h) * 60 + (a.end.m - a.start.m);
    }

    return res;
}
int search_intervals(time_of_day t, const interval a[], int n, interval &u)
{
    int sum = 0;
    u.start = t;
    u.end = t;
    for (int i = 0; i < n; i++)
    {
        if (belong(a[i], t) == true)
        {

            if (a[i].start.h < u.start.h)
            {
                u.start = a[i].start;
            }
            else if (a[i].start.h == u.start.h)
            {
                if (a[i].start.m <= u.start.m)
                    u.start = a[i].start;
            }
            if (a[i].end.h > u.end.h)
            {
                u.end = a[i].end;
            }
            else if (a[i].end.h == u.end.h)
            {
                if (a[i].end.m >= u.end.m)
                    u.end = a[i].end;
            }
        }
    }
    sum = adder(u);
    return sum;
}

int main()
{
    return 0;
}