#include <iostream>
#include "interval.h"
using namespace std;

int compare_time_of_day(const time_of_day& t1, const time_of_day& t2) {
    if (t1.h < t2.h) return -1;
    if (t1.h > t2.h) return 1;
    if (t1.m < t2.m) return -1;
    if (t1.m > t2.m) return 1;
    return 0;
}

int compare_intervals(const interval& i1, const interval& i2) {
    int start_cmp = compare_time_of_day(i1.start, i2.start);
    int end_cmp = compare_time_of_day(i1.end, i2.end);

    if (start_cmp == 0 && end_cmp == 0) return 0;
    if (start_cmp < 0 && end_cmp > 0) return 1;
    if (start_cmp > 0 && end_cmp < 0) return -1;

    if (start_cmp < 0 && end_cmp < 0) {
        if (compare_time_of_day(i1.end, i2.start) > 0) return 1;
    } else if (start_cmp > 0 && end_cmp > 0) {
        if (compare_time_of_day(i1.start, i2.end) < 0) return 1;
    }

    return 0;
}

int search_intervals(time_of_day t, const interval a[], int n, interval& u) {
    int total_duration = 0;

    for (int i = 0; i < n; ++i) {
        if (compare_time_of_day(t, a[i].start) >= 0 && compare_time_of_day(t, a[i].end) < 0) {
            if (total_duration == 0) {
                u.start = a[i].start;
            }
            u.end = a[i].end;
            total_duration += (u.end.h - u.start.h) * 60 + (u.end.m - u.start.m);
        }
    }

    if (total_duration == 0) {
        u = {t, t};
        return 0;
    }

    return total_duration;
}

int main() {
    return 0;
}