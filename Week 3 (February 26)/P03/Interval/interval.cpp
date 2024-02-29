#include <iostream>
#include "interval.h"
using namespace std;

bool earlier_than(time_of_day a, time_of_day b) {
    if (a.h == b.h) {
        if (a.m < b.m) {
            return true;
        } else {
            return false;
        }
    } else if (a.h < b.h) {
        return true;
    } else {
        return false;
    }
}

interval intersection(interval a, interval b) {
    interval r;
    if (earlier_than(a.start, b.end) && earlier_than(b.start, a.end)) {
        r.start = earlier_than(a.start, b.start) ? b.start : a.start;
        r.end = earlier_than(a.end, b.end) ? a.end : b.end;
    } else {
        r = { { 0 , 0 } , { 0 , 0 } };
    }
    return r;
}

int main() {
    return 0;
}