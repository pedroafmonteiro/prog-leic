#include "Date.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

bool operator<(const Date& date1, const Date& date2) {
    if (date1.getYear() != date2.getYear()) { return date1.getYear() < date2.getYear(); }
    else if (date1.getMonth() != date2.getMonth()) { return date1.getMonth() < date2.getMonth(); }
    else { return date1.getDay() < date2.getDay(); }
}

ostream& operator<<(ostream& os, const Date& date) {
    os << setw(4) << setfill('0') << date.getYear() << '/'
       << setw(2) << setfill('0') << date.getMonth() << '/'
       << setw(2) << setfill('0') << date.getDay();
    return os;
}

int main() {
    return 0;
}