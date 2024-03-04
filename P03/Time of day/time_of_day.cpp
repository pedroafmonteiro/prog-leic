#include <iostream>
#include "time_of_day.h"
using namespace std;

time_of_day tick(time_of_day t) {
    time_of_day r = t;
    if (t.m != 59) {
        r.m++;
    } else {
        r.m = 0;
        if (r.h != 23) {
            r.h++;
        } else {
            r.h = 0;
        }
    }
    return r;
}

int main() {
    return 0;
}