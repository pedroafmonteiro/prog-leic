#include "Date.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

bool operator<(const Date& date1, const Date& date2) {
    if (date1.getYear() != date2.getYear()) {
        return date1.getYear() < date2.getYear();
    } else if (date1.getMonth() != date2.getMonth()) {
        return date1.getMonth() < date2.getMonth();
    } else {
        return date1.getDay() < date2.getDay();
    }
}

std::ostream& operator<<(std::ostream& out, const Date& date) {
    out << std::setw(4) << std::setfill('0') << date.getYear() << '/' << std::setw(2) << std::setfill('0') << date.getMonth() << '/' << std::setw(2) << std::setfill('0') << date.getDay();
    return out;
}

int main() {
    return 0;
}